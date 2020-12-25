// https://atcoder.jp/contests/abc087/tasks/abc087_b
const main = (input) => {
  const inputs = input.split('\n')
  const five_hundred_yens = Number(inputs[0])
  const hundred_yens = Number(inputs[1])
  const fifty_yens = Number(inputs[2])
  const x = Number(inputs[3])
  
  let result = 0;
  
  for (let five_hundred = 0; five_hundred <= five_hundred_yens; five_hundred++) {
    for(let hundred = 0; hundred <= hundred_yens; hundred++) {
      for (let fifty = 0; fifty <= fifty_yens; fifty++) {
        if ((500 * five_hundred + 100 * hundred + 50 * fifty) === x) result++
      }
    }
  }
  
  console.log(result)
}
main(require('fs').readFileSync('/dev/stdin', 'utf-8'))