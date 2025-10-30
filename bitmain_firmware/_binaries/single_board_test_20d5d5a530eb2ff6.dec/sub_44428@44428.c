int __fastcall sub_44428(float *a1, int a2)
{
  int v3; // r11
  int v4; // r7
  int v5; // r9
  int v6; // r8
  int v7; // r0
  int v8; // r5
  int v9; // r2
  unsigned __int8 *v10; // r3
  int v11; // r5
  int v12; // r1
  int v13; // r7
  int v14; // r0
  int v16; // r5
  int v17; // r0
  int v18; // r3
  int v19; // [sp+8h] [bp-4Ch]
  char s[16]; // [sp+10h] [bp-44h] BYREF
  char v22[52]; // [sp+20h] [bp-34h] BYREF

  sub_4298C(dword_7050BC);
  sub_6DDF4(2);
  if ( sub_6E9D8(dword_21C100, *(_DWORD *)(dword_705300 + 164)) )
  {
    sub_1E938(v22, 0x30u);
    printf("%s ", v22);
    printf(
      "%s : fan %d pwm_set speed %d failed\n",
      "pt_before_send_nonce",
      dword_21C100,
      *(_DWORD *)(dword_705300 + 164));
    snprintf(byte_641FD8, 0x100u, "fan %d pwm_set speed %d failed", dword_21C100, *(_DWORD *)(dword_705300 + 164));
    sub_3CC5C((int)byte_641FD8, v22);
  }
  if ( sub_3D93C(*(_DWORD *)dword_705300) )
  {
    sub_3D9AC(*(_DWORD *)dword_705300);
    sleep(2u);
    sub_787F0(*(unsigned __int8 *)dword_705300);
    sub_41C48();
    sub_71D60(*(_DWORD *)dword_705300, 26);
    v3 = sub_42A7C();
    if ( v3 )
    {
      sub_1E938(v22, 0x30u);
      printf("%s ", v22);
      printf("%s : create read temp thread failed\n", "pt_before_send_nonce");
      v3 = -1;
      strcpy(byte_6421D8, "create read temp thread failed");
      sub_3CC5C((int)byte_6421D8, v22);
    }
    else
    {
      sub_3DBE0(
        *(_DWORD *)(dword_705300 + 156),
        &byte_705330,
        *(char *)(dword_705300 + 148),
        *(_DWORD *)(dword_705300 + 152));
      sub_3E2C0();
      v4 = sub_3DD78(&byte_705330, *(_DWORD *)(dword_705300 + 148));
      sub_1E938(v22, 0x30u);
      printf("%s ", v22);
      printf("%s : env temp: %d\n", "pt_before_send_nonce", v4);
      snprintf(byte_6422D8, 0x100u, "env temp: %d", v4);
      sub_3CC5C((int)byte_6422D8, v22);
      dword_63D1D4 = v4;
      v19 = sub_6216C(v4);
      sub_1E938(v22, 0x30u);
      printf("%s ", v22);
      printf("%s : vol diff:%d\n", "pt_before_send_nonce", v19);
      snprintf(&byte_6422D8[256], 0x100u, "vol diff:%d", v19);
      sub_3CC5C((int)&byte_6422D8[256], v22);
      dword_6424D8 = v19;
      sub_1E938(v22, 0x30u);
      printf("%s ", v22);
      printf("%s : set pwm:%d\n", "pt_before_send_nonce", 30);
      snprintf(byte_6424DC, 0x100u, "set pwm:%d", 30);
      sub_3CC5C((int)byte_6424DC, v22);
      sub_6E9D8(dword_21C100, 30);
      sub_71AF4(*(_DWORD *)dword_705300);
      if ( sub_3DA1C(0x514u) )
      {
        sub_71B24(*(_DWORD *)dword_705300);
        usleep(0x186A0u);
        sub_71AF4(*(_DWORD *)dword_705300);
        usleep(0x2710u);
        sub_71B24(*(_DWORD *)dword_705300);
        usleep(0x186A0u);
        sub_71AF4(*(_DWORD *)dword_705300);
        usleep(0x2710u);
        sub_71B24(*(_DWORD *)dword_705300);
        usleep(0x1388u);
        sub_3E06C(1300, *(_DWORD *)(dword_705300 + 192), 5);
        sub_3E2C0();
        sub_410A0();
        sub_42B74();
        sub_3E344(*(_DWORD *)dword_705300);
        sub_443AC();
        sub_71AF4(*(_DWORD *)dword_705300);
        usleep(0x2710u);
        sub_71B24(*(_DWORD *)dword_705300);
        usleep(0x186A0u);
        v5 = sub_41D0C(0, 0);
        if ( v5 == *(_DWORD *)(dword_705300 + 4) )
        {
          sub_1E938(v22, 0x30u);
          printf("%s ", v22);
          printf("%s : first find asic num %d\n", "pt_before_send_nonce", v5);
          snprintf(&byte_6424DC[256], 0x100u, "first find asic num %d", v5);
          sub_3CC5C((int)&byte_6424DC[256], v22);
          sub_41128();
          usleep(0xF4240u);
          sub_41AC4(a1);
          usleep(0xF4240u);
          v6 = sub_41D0C(0, 0);
          if ( v6 == *(_DWORD *)(dword_705300 + 4) )
          {
            sub_1E938(v22, 0x30u);
            printf("%s ", v22);
            printf("%s : second find asic num %d\n", "pt_before_send_nonce", v6);
            snprintf(&byte_6424DC[512], 0x100u, "second find asic num %d", v6);
            sub_3CC5C((int)&byte_6424DC[512], v22);
            sub_6E9D8(dword_21C100, 30);
            sub_1E938(v22, 0x30u);
            printf("%s ", v22);
            printf("%s : set pwm:%d\n", "pt_before_send_nonce", 30);
            snprintf(&byte_6424DC[768], 0x100u, "set pwm:%d", 30);
            v7 = sub_3CC5C((int)&byte_6424DC[768], v22);
            v8 = *(char *)(dword_705300 + 148);
            if ( sub_62120(v7) )
              v9 = 47;
            else
              v9 = 25;
            if ( sub_44168(&byte_705330, v8, v9)
              && (sub_1E938(v22, 0x30u),
                  printf("%s ", v22),
                  printf("%s : err temp low...\n", "pt_before_send_nonce"),
                  strcpy(byte_642ADC, "err temp low..."),
                  sub_3CC5C((int)byte_642ADC, v22),
                  v16 = sub_3DD40(&byte_705330, *(_DWORD *)(dword_705300 + 148)),
                  v16 <= 49) )
            {
              sub_472C0(15, 1);
              v3 = -1;
              v17 = snprintf(s, 0x10u, "Max %d", v16);
              if ( sub_62120(v17) )
                v18 = 47;
              else
                v18 = 25;
              snprintf(v22, 0x10u, "Need %d ~ %d", 50, v18);
              sub_2146C("Heating Board", s, v22);
            }
            else
            {
              v10 = (unsigned __int8 *)dword_705300;
              if ( *(int *)(dword_705300 + 4) > 0 )
              {
                v11 = 0;
                do
                {
                  v12 = *((_DWORD *)v10 + 10) * v11++;
                  sub_784F4(*v10, v12, 3, *(unsigned __int8 *)(dword_223680 + 584), 0);
                  v10 = (unsigned __int8 *)dword_705300;
                }
                while ( *(_DWORD *)(dword_705300 + 4) > v11 );
              }
              sub_1E938(v22, 0x30u);
              printf("%s ", v22);
              printf("%s : set pwth: %d\n", "pt_before_send_nonce", 3);
              snprintf(byte_6428DC, 0x100u, "set pwth: %d", 3);
              sub_3CC5C((int)byte_6428DC, v22);
              v13 = (10 * ((30 - v4) / 2)) & ~((10 * ((30 - v4) / 2)) >> 31);
              sub_6E9D8(dword_21C100, *(_DWORD *)(dword_705300 + 168) - v13);
              sub_1E938(v22, 0x30u);
              printf("%s ", v22);
              printf("%s : set pwm:%d\n", "pt_before_send_nonce", *(_DWORD *)(dword_705300 + 168) - v13);
              snprintf(byte_6429DC, 0x100u, "set pwm:%d", *(_DWORD *)(dword_705300 + 168) - v13);
              v14 = sub_3CC5C((int)byte_6429DC, v22);
              if ( a2 )
                v19 = sub_62448(v14) - dword_7050F0;
              if ( sub_3E06C(1500, v19 + *(_DWORD *)(dword_705300 + 196), 10) )
              {
                usleep((__useconds_t)&unk_1E8480);
                byte_6377CC = 1;
              }
              else
              {
                return -1;
              }
            }
          }
          else
          {
            sub_472C0(13, 1);
            v3 = -1;
            sub_3D9AC(*(_DWORD *)dword_705300);
            sleep(2u);
            snprintf(s, 0x10u, "Only %d", v6);
            snprintf(v22, 0x10u, "Need %d", *(_DWORD *)(dword_705300 + 4));
            sub_2146C("Find asics 2", s, v22);
          }
        }
        else
        {
          sub_472C0(12, 1);
          v3 = -1;
          sub_3D9AC(*(_DWORD *)dword_705300);
          sleep(2u);
          snprintf(s, 0x10u, "Only %d", v5);
          snprintf(v22, 0x10u, "Need %d", *(_DWORD *)(dword_705300 + 4));
          sub_2146C("Find asics 1", s, v22);
        }
      }
      else
      {
        sub_472C0(11, 1);
        sub_3D9AC(*(_DWORD *)dword_705300);
        sleep(2u);
        v3 = -1;
        sub_2146C("Power on", "err", 0);
      }
    }
  }
  else
  {
    sub_1E938(v22, 0x30u);
    printf("%s ", v22);
    printf("%s :  init platform failed\n", "pt_before_send_nonce");
    v3 = -1;
    strcpy(byte_6420D8, " init platform failed");
    sub_3CC5C((int)byte_6420D8, v22);
  }
  return v3;
}
