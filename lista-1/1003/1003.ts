//@ts-ignore
import fs from "fs";

const input = fs.readFileSync("/dev/stdin", "utf8");
const lines: string[] = input.split("\n");

const a = parseInt(lines.shift()!);
const b = parseInt(lines.shift()!);

console.log(`SOMA = ${a + b}\n`);