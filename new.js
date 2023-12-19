const fs = require('fs');
const path = require('path');

// count current dirs
const dirs = fs.readdirSync(__dirname).filter(dir => dir.match(/^(\d+)$/));
let newFolder = 0;
for (const dir of dirs) {
  newFolder = Math.max(newFolder, +dir + 1)
}
fs.mkdirSync(path.join(__dirname, `${newFolder}`));
fs.mkdirSync(path.join(__dirname, `${newFolder}`, 'additional_file'));
fs.mkdirSync(path.join(__dirname, `${newFolder}`, 'testdata'));
const testdataConfig = `type: default
time: 1000ms
memory: 256MB
`
fs.writeFileSync(path.join(__dirname, `${newFolder}`, 'testdata', 'config.yaml'), testdataConfig);

const problemConfig = `title: P${newFolder}
tag:
- 算法竞赛进阶指南
pid: P${newFolder}
`
fs.writeFileSync(path.join(__dirname, `${newFolder}`, 'problem.yaml'), problemConfig);

const statement = `## 题目描述



## 输入格式



## 输出格式



## 数据范围



## 样例

\`\`\`input1

\`\`\`

\`\`\`output1

\`\`\`

`
fs.writeFileSync(path.join(__dirname, `${newFolder}`, 'problem_zh.md'), statement);
