//first line is name,phone
//2->246 is contacts
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    for (int i=2;i<=246;i++)
    {
        string s; getline(cin,s);
        int comma=1000;
        int space=1000;
        for (int j=0;j<s.length();j++)
        {
            if (s[j]==',') {comma=min(j,comma);}
            if (s[j]==' ') {space=min(j,space);}
        }
        int till=min(comma,space);
        string a=s.substr(0,till);
        cout<<s<<","<<a<<endl;
        

    }
    return(0);
    
    
}
/*

Mummy,8375096016
Guddi Mausi India,84466 96473
Debu Fiitjee,+919319963049
Whi,+918035727041
Toppo Fiitjee,99990 53571
Fiitjee Classmate,870-8277489
Photocopy,98118 68783
Mony Kuku Number,95690 35187
Pops,+919899583833
Dp Sir Fiitjee Maths,99717 35382
Pratima Didi,+919205536298
Aditya,
IMO JEE TSHIRT,+91 84478 03080
IMO JEE delivery,870-0405869
Om Prakash Kuku,+919812893516
Shaurya,9868015918
Bunty Mausi,+15733560278
Harsh Bhaiya,+15738258831
Who?,+919811296905
Shivam Bhaiya,+61481976400
Who You,+919355199577
Raghav Orchids,9953683479
Rishu,
Bunty Mausi,+15733560278
Achintya Bhaiya Kuku Bus,8826599025
Noor Aunty,+919319285103
Keshav Fiitjee,95880 84873
AD,+918855807832
Jatin,98216 83227
Yuvraj Karwar,70425 50989
Intercom,721-7720962
Woah Jee Mains Man,+917668381671
Print Work,97178 83310
Bunty Mausi,+15733560278
Fiitjee Maths Sir,+919899983816
Tower 22 Guard,9560653056
Uber Paytm,8178198537
Uber Paytm,8178198537
Nana,+919934023358
Hindi Maam Class 10,9818490056
Nani,8340-661587
Nani,8340-661587
Carpenter Orchid Ram,9971282714
Suresh Bhaiya,79798 97206
Mami,+919311028045
Nani Old,7061786478
Fiitjee Kuku Orchid,85953 14630
Aarush Fiitjee,+919717091439
Pranay Fiitjee Van,7303810025
Big Mirchi,99585 45555
Shaurya Jain Parent,8826632001
Shaurya Jain Fiitjee,9811004591
Van Didi Fiitjee,+919971992588
Taanish,8447608683
Maahi,+917483849515
shivika Didi,+918302271707
Maahi Dubai,+971 54 401 3946
Guddi Mausi,+971508919197
Shantanu Mausa,+966554876795
Mamu,9650149933
Van Fiitjee,+919899507868
Cheenu Orchid Petals,9910443704
Print Aravali,99994 08402
Print Aravali,99994 08402
Idk,9773833793
Harihar Roommate,6382698216
Aravind Roommate,+919676689348
CS third Year Startup,+919953830274
Hardik IIT,+918439304486
Lakshaya,+919352696818
Dheeraj B01,7878504571
Football Iit,7428589869
Ryan Bhaiya mnc,8956044611
Manish IIT ELECTRICIAN,9015287812
Hriday IIT b4,94797 20480
Anurag Sangwan,93500 40407
Anurag Sangwan,93500 40407
Nolin IIT,9875882360
Nolin,+919875882360
Kya,+918920012997
Aarav FIITJEE,+918178308426
Madhav IITD,9315804400
Harshit FIITJEE,(870) 805-9760
Akshit FIITJEE,(977) 382-2625
Tanishq FIITJEE,98997 24251
Tanishq FIITJEE Original,99714 77818
Who????,+918505892035
Kinshuk Uday IIT,99717 56213
Kinshuk Uday IIT,99717 56213
Sagnik ‘shah’ Girnar,+917003554510
Vikas B9 IIT,+919696351995
Bhavik Kumaon Gp 29 IIT,+919599065273
Nikhil IIT A13,+919014526020
Naman IITD group 29,+919266205956
Arnav Satpura IIT,98711 01667
Dhruv,95996 38227
ash B 16,9387974090
Tejaswi IIT,+917601004748
arvind Basketball iitd,+917569180772
Harshit gp 25 IIT,80942 77770
Arnab Kumaon Ee,+919594951312
Ishan Aravali B7,+917091087503
Armaan IIT basketball,+917657934385
Vrinda gp 30 IIT,+919413450222
Aditya (👦) IIT,+919696143779
Divyam,+919511339984
Shrawan Taxi Bhaiya,9667107882
Golu,+918860982441
Deepak Bhaiya,9716907638
Parikshay B6,+918529265086
Yash,+91 8448-455140
Anshumaan,+91 96257 22496
Aryan,+918373939236
Vinayak A12 IIT,+919289060966
Saideep IIT,8920498484
Ishan Satpura,9634322025
Anuron Shivalik NLN,+918447493659
Gurshan,+919888484212
Vaibhav B8,+919305293959
Abhijay,+919219500610
Vaibhav B4,+918340472860
Lakshay Orchid Petals,+918826763809
Manvser Girnar Basketball,+919116835154
Shivaji B15 Aravali,+917569731882
Who Is This,+916280611171
Chirag,+918950352033
Aditya Udaigiri MCP,8920200133
Raghav,+918306246996
Devesh Sir Bsw,+917668366340
Keshav Sir Bsw,+918860623981
Prom Sir Imp,9509396506
Prom Sirrr,9839834479
Rahul IITD indhradhanu,7503078079
Koushal Udaigiri Gp 29,+919729488958
Shashank IITD,+919412178894
Santosh B4,+917981945176
Dr Shashi,+918527536194
Aravali Print,96508 83631
Delhi 16,+918826005460
Sudanshu IITD,+919589974792
Taanish Mom,+918447642222
Ravi,99115 45240
Pranav Rap Aravali,+917303328614
Sunny Auto Bhaiya,+917669947488
Ashmit Ketrapal Vatika Zanskar,+919319001201
Milind,+918607186039
Dev,+917027007905
Ayushi IIT,+919560519222
rdv Guy,+918949335783
Kabir Basketball Aravali Sir,+919992345104
Jay z Kara Iit,+918588052136
Daksh Athletics Aravali,+919644543678
Daksh Sagnik Roommate,81309 98789
Bhavya B11,+919934242616
Divyam B17,+917357350677
Vishnu Rdv,92565 37722
Abhay Aravali Basketball,+916265647830
Jatin Aravali,+919694352569
Gaurav Rdv Security,+918949005234
Pritesh Proelectro,+917201046359
Tushar B1,+919068957437
Madhav NIN,+918529089578
Shivangi Didi,+15733560752
Nilanjana Group 29,+918874878373
Sriraman NLN,+917530032824
Abhishek Singhal Basketball IITD,+919821322083
Abhishek Singhal Basketball IITD,+919821322083
Anuj Aravali,+919992818729
Sagnik Dad,98830 84477
Sagnik Dad,98830 84477
Anhad Aravali,+917827908120
Devender Driver Bhaiya Jaipur,9818097458
Priyanka Didi,+447376451783
Oberoi Security Ranthambore,+919887938312
Bunty Mausi India Number,97174 65360
Dhruv New Gaud,+917217855200
Dhruv New Gaud,+917217855200
Manav IIT,+918849304650
Naksh,+918699350625
Manas Satpura,+91 99104 23886
Manav,+917408555538
Shubhit,+61405925914
Hamnah,+917318156092
Suraj Juice Holistic Ayodhya,7518877791
Devansh A08,+919244352208
Delhi 16 Bruh,+918076403779
Nalin Sir Office Number,011-26591525
Vihaan Bhaiya Basketball,+919606312511
Satwik Bhaiya Basketball,+918447788437
Atharva Bhaiya Basketball,+918867498819
Atharv Bhaiya Aravali Basketball,+919560306223
Aditya Gp 29,+917027091311
Adarsh Gp 29,+919519867347
Adarsh Gp 29,+919519867347
Prank Maanya,98211 17822
Goutham,6300603721
Goutham,6300603721
Preksha,+919896083029
EEshan,+918448557713
Sangeeta Maam Nen,78386 09598
Sangeeta Maam Nen,78386 09598
Sangeeta Maam Nen,78386 09598
Ritwik,+918882437744
Juice Shop Bhaiya,9667775934
Kunal,+919355455600
Masoom Meerut,80177 20687
Krishna,74172 20062
Aditya Meerut,95485 27519
Oorja pops Coursemate Iitd Mba,+917838283896
Ayush Basketball Meerut,6395049193
Soumya bsp Iitd,7632919811
Pradyuman,+918130507389
Adarsh Gdgps Lko,+918795185508
Krutarth Shah,90324 42266
Adi Bhaiya Orchids Basketball IIIT,+918860317660
Aditya Meerut Basketball,+918923146339
Orchids 503 Aunty,95617 55698
Siddhant Gdgps,+918604700511
Rohan Meerut Basketball,+917668981201
Dushyant Sir Basketball,+917424971947
Yuvraj Aravali,+917999253105
Mohit Aravali,+918318361597
Disha iit,+918595076979
Aditya Orchid Petals Basketballs,+917011603600
Ansh Bhaiya,7454-056792
Ansh Bhaiya,7454-056792
Nitin IIT,+919560070845
Himanshu Juice Shop Cycle Bhaiya,7080921125
random,+919582049324
nitin Prank,98115 86525
Arjun Prank,96545 54093
Salman chaayos,90650 55139
Salman chaayos,90650 55139
Bhavishya Bhaiya Basketball Iitd,+917834813396
Tatsam Bhaiya Basketball Iitd,+917289966718
Aman Prank,99998 55831
Shaurya Iitd git,+918353932755
Aishwary Bhaiya,+918859705006
Himmat Prank,97111 55245
SUDESHNA Aunty,+917350775479
Sourav Sagnik Friend,+919903191178
Vishal Meerut Basketball,9027247176
Keshav,
no,
Bal Chandra Bhaiya Juice Shop,8400787774
*/