//
//  main.c
//  test2
//
//  Created by jasonlin on 2019/9/10.
//  Copyright © 2019年 jasonlin. All rights reserved.
//

#include <stdio.h>


class Car{
    public String brand;
    public String type;
    public int hp;
    public String getInformation(){
        return "廠牌"+brand+"型號"+type+"馬力"+hp;
    }
}
Car BMW = new Car("BMW","X5",340);//宣告類別為Car的資料，並給定BMW變數
Car Porsche = new Car("Porsche","Cayenne",300);//宣告類別為Car的資料，並給定Porsche變數

BMW.getInformation();//印出資訊
Porsche.getInformation();//印出資訊
