const fs = require('fs');

function lerJSON() {
  return fs.readFileSync('dados.json', 'utf-8', (err, dados) => {
    if (err) {
      console.log(err);
    } else {
      return dados;
    }
  })
}

const dados = JSON.parse(lerJSON());

function menorValor() {
  let valor = dados[0].valor;

  dados.forEach((item, i) => {
    if (item.valor !== 0 && item.valor < valor) {
      valor = item.valor;
    }
  });

  return valor
}

function maiorValor() {
  let valor = dados[0].valor;

  dados.forEach((item, i) => {
    if (item.valor !== 0 && item.valor > valor) {
      valor = item.valor;
    }
  });

  return valor
}

function mediaMensal() {
  let soma = 0;
  let faturamentoZero = 0;

  dados.forEach(item => {
    if (item.valor === 0) {
      faturamentoZero++;
    }
    soma += item.valor;
  });
  
  console.log('Faturamento zero: ', faturamentoZero)

  return soma / (dados.length - faturamentoZero);
}

function diasComFaturamentoAcimaMediaMensal() {
  const media = mediaMensal();
  let dias = 0;

  dados.forEach(item => {
    if (item.valor > media) {
      dias++;
    }
  });

  return dias;
}

console.log('Menor faturamento: ', menorValor())
console.log('Maior faturamento: ', maiorValor())
console.log('Dias com faturamento acima da média mensal: ', diasComFaturamentoAcimaMediaMensal())