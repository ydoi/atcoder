// https://atcoder.jp/contests/abc081/tasks/abc081_a
const Main = (input) => {
  console.log(input.split('').filter(number => number === '1').length)
}
Main(require('fs').readFileSync('/dev/stdin', 'utf-8'))