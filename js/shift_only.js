// https://atcoder.jp/contests/abc081/tasks/abc081_b
const check = (numbers, result) => {
  if (numbers.filter(_ => (_ === 0) || (_ % 2 !== 0)).length > 0) {
    console.log(result)
    return
  }
  result++
  check(numbers.map(_ => _ / 2), result)
}

const main = (input) => {
  inputs = input.split('\n')
  const n = inputs[0]
  const numbers = inputs[1].split(' ').map(_ => Number(_))
  check(numbers, 0)
}
main(require('fs').readFileSync('/dev/stdin', 'utf-8'))