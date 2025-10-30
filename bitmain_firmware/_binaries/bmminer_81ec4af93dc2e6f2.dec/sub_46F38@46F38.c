int __fastcall sub_46F38(int a1)
{
  unsigned int v3; // r8
  int v4; // r3
  _DWORD *v5; // r7
  int v6; // r5
  char *v7; // lr
  char *v8; // r12
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  _DWORD *v13; // lr
  char *v14; // r12
  int v15; // r1
  int v16; // r2
  int v17; // r0
  int v18; // r2
  int v19; // r3
  __time_t v20[2]; // [sp+0h] [bp-808h] BYREF
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( !sub_46EB0() )
  {
    sub_3D7A0(v20);
    v3 = a1 - 160;
    dword_530EFC = 2;
    if ( (unsigned int)off_AFC24 > 4 )
    {
      snprintf(s, 0x800u, "[DEBUG] Sweep init, sweep_type = 0x%X.\n", a1);
      sub_3AF5C(4, s, 0, v4);
      if ( v3 > 1 )
        goto LABEL_7;
      if ( (unsigned int)off_AFC24 > 4 )
      {
        strcpy(s, "[DEBUG] Allocate memory for sweep.\n");
        sub_3AF5C(4, s, 0, *(int *)"sweep.\n");
      }
    }
    else if ( v3 > 1 )
    {
LABEL_7:
      sub_46318(20, 255);
      if ( (unsigned int)off_AFC24 <= 3 )
        goto LABEL_8;
      v7 = "Sweep type error, exit.\n";
      v8 = s;
      goto LABEL_18;
    }
    v5 = (_DWORD *)dword_530EF4;
    if ( dword_530EF4 || (v5 = calloc(0x107Cu, 1u), (dword_530EF4 = (int)v5) != 0) )
    {
      v6 = 0;
      *v5 = a1;
      v5[1] = 1199570688;
      do
      {
        if ( sub_266F0(v6) )
        {
          v17 = sub_26540();
          if ( v17 > 0 )
          {
            v18 = dword_530EF4 + 8 + 4 * (v17 + (v6 << 8));
            v19 = dword_530EF4 + (v6 << 10) + 8;
            do
            {
              *(_DWORD *)(v19 + 4) = 300;
              v19 += 4;
            }
            while ( v19 != v18 );
          }
        }
        ++v6;
      }
      while ( v6 != 4 );
      goto LABEL_8;
    }
    sub_46318(13, 255);
    if ( (unsigned int)off_AFC24 <= 3 )
    {
LABEL_8:
      dword_530EFC = 1;
      return -1;
    }
    v7 = " memory for sweep ctxt.\n";
    qmemcpy(s, "Fail to allocate", 16);
    v8 = &s[16];
LABEL_18:
    v9 = *(_DWORD *)v7;
    v10 = *((_DWORD *)v7 + 1);
    v11 = *((_DWORD *)v7 + 2);
    v12 = *((_DWORD *)v7 + 3);
    v13 = v7 + 16;
    *(_DWORD *)v8 = v9;
    *((_DWORD *)v8 + 1) = v10;
    *((_DWORD *)v8 + 2) = v11;
    *((_DWORD *)v8 + 3) = v12;
    v14 = v8 + 16;
    v15 = v13[1];
    v16 = v13[2];
    *(_DWORD *)v14 = *v13;
    *((_DWORD *)v14 + 1) = v15;
    v14[8] = v16;
    sub_3AF5C(3, s, 0, v12);
    goto LABEL_8;
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(s, "Sweep already done, exit.\n");
    sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
  }
  return 0;
}
