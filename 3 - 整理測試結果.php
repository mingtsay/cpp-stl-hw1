<?php
$targets = [
    'simple',
    'iterator',
    'alternative',
];

$lengths = [1000, 5000, 10000, 50000, 100000, 500000];
$counts = [100, 500, 1000];

$csv = 'Target,Length,Count,Input,Sorting,Output,Total,"Character Table Creation"' . "\r\n";

foreach ($targets as $target) {
    foreach ($lengths as $length) {
        foreach ($counts as $count) {
            $result = explode("\r\n", file_get_contents("result/result_${target}_${length}_${count}.txt"));
            if ('alternative' === $target) {
                $in = explode(': ', $result[2])[1];
                $sort = explode(': ', $result[6])[1];
                $out = explode(': ', $result[8])[1];
                $total = explode(': ', $result[10])[1];
                $ctc = explode(': ', $result[4])[1];
            } else {
                $in = explode(': ', $result[2])[1];
                $sort = explode(': ', $result[4])[1];
                $out = explode(': ', $result[6])[1];
                $total = explode(': ', $result[8])[1];
                $ctc = '';
            }
            $csv .= "$target,$length,$count,$in,$sort,$out,$total,$ctc\r\n";
        }
    }
}

file_put_contents('result.csv', $csv);
