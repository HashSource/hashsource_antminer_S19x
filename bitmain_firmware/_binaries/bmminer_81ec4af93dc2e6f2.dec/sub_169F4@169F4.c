int __fastcall sub_169F4(int a1, int a2)
{
  unsigned int v2; // r11
  int v3; // r0
  unsigned int v4; // r6
  unsigned int v5; // r9
  int v6; // r4
  int *v7; // r2
  int v8; // t1
  unsigned int v9; // r3
  int v10; // r4
  bool v11; // r3
  int v13; // r4
  int v14; // r0
  int v15; // r4
  int v16; // r0
  size_t v18; // r10
  int *v19; // r1
  char *v20; // r3
  int v21; // r3
  int v22; // r4
  int v23; // r6
  int v24; // r0
  int v25; // r3
  int v26; // r4
  int v27; // r0
  int v28; // r3
  int v29; // [sp+8h] [bp-81Ch]
  unsigned int v30; // [sp+Ch] [bp-818h]
  void *src; // [sp+10h] [bp-814h]
  int v32; // [sp+14h] [bp-810h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  v30 = a1;
  v32 = 10;
  do
  {
    v2 = 0;
    if ( sub_26750(a1) )
    {
      do
      {
        v3 = sub_52700((unsigned __int8)v2);
        v4 = v3;
        if ( v3 >= 0 )
        {
          v5 = v3;
          if ( (unsigned int)off_AFC24 > 4 )
          {
            snprintf(s, 0x800u, "fan[%u] speed[%u]\n", (unsigned __int8)v2, v3);
            sub_3AF5C(4, s, 0, v21);
          }
          v6 = 0;
          v7 = dword_AF2D0;
          do
          {
            v8 = *v7++;
            v9 = (unsigned __int8)v6++;
            if ( v8 == (unsigned __int8)v2 )
            {
              v11 = v9 > 1;
              goto LABEL_15;
            }
          }
          while ( v6 != 4 );
          if ( v4 > dword_B0EC0 )
          {
            v20 = (char *)dword_AF2D0;
            v18 = 12;
            v19 = &dword_B0EC0;
            v29 = 0;
          }
          else
          {
            if ( v4 > dword_B0EC4 )
            {
              v10 = 1;
              v29 = 1;
            }
            else if ( v4 > dword_B0EC8 )
            {
              v10 = 2;
              v29 = 2;
            }
            else
            {
              if ( v4 <= dword_B0ECC )
              {
                v11 = 1;
                goto LABEL_15;
              }
              v10 = 3;
              v29 = 3;
            }
            v6 = 4 * (v10 + 1);
            v18 = 4 * (3 - v29);
            v19 = (int *)((char *)&dword_B0EC0 + v6 - 4);
            v20 = (char *)&dword_AF2D0[-1] + v6;
          }
          src = v20;
          memmove((char *)&dword_B0EC0 + v6, v19, v18);
          memmove((char *)dword_AF2D0 + v6, src, v18);
          dword_AF2D0[v29] = (unsigned __int8)v2;
          v11 = 1;
          LODWORD(flt_B0E78[v29 + 18]) = v4;
LABEL_15:
          if ( (int)v4 > 6000 && v11 )
            v5 = 6000 * v4 / 0x1B58;
          sub_2682C((unsigned __int8)v2, v5);
          v3 = sub_267A4((unsigned __int8)v2, v30 <= v5);
        }
        ++v2;
      }
      while ( v2 < sub_26750(v3) );
    }
    v13 = sub_26760();
    if ( v13 >= sub_26750(v13) )
      break;
    v14 = a2 ? 2000 : 50;
    a1 = sub_3D9D4(v14);
    --v32;
  }
  while ( v32 );
  v15 = sub_26760();
  v16 = sub_26750(v15);
  if ( v15 < v16 )
  {
    if ( (unsigned int)off_AFC24 > 1 )
    {
      v26 = sub_26760();
      v27 = sub_26750(v26);
      snprintf(s, 0x800u, "Error, fan lost, only find %d (< %d)\n", v26, v27);
      v16 = sub_3AF5C(1, s, 0, v28);
    }
    v22 = 0;
    while ( 1 )
    {
      v23 = (unsigned __int8)v22++;
      v16 = sub_26750(v16);
      if ( v23 >= v16 )
        break;
      if ( (unsigned int)off_AFC24 > 3 )
      {
        v24 = sub_26898(v23);
        snprintf(s, 0x800u, "fan_id = %d, fan_speed = %d\n", v23, v24);
        v16 = sub_3AF5C(3, s, 0, v25);
      }
    }
    sub_46318(10, 255);
    sub_29B38(1);
    sub_43B4C(8, "fan lost");
    return -1;
  }
  else
  {
    sub_29B38(0);
    return 0;
  }
}
