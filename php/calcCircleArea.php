<?php

class Calculate {
    public function calcCircleArea($r){
        $phi = 3.14;
        $area = $phi * ($r ** 2);
        return $area;
    }
}

$rect = new Calculate;
echo $rect->calcCircleArea(3);