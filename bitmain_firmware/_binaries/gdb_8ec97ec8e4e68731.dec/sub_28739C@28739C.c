int __fastcall sub_28739C(int a1, int a2)
{
  int v2; // r6
  int v3; // r7
  int (__fastcall *v4)(const char *, signed int); // r8
  int v5; // r2
  int v6; // r3
  _DWORD *v7; // r0
  bool v8; // zf
  int v9; // r2
  int v10; // r3
  int v11; // t1
  int v12; // r12
  int v13; // r3
  char v14; // r0
  int v16; // r0
  const char *v17; // r5
  int v18; // r0
  int v19; // [sp+Ch] [bp-4h] BYREF

  v2 = a1;
  if ( (int (*)())dword_48AAD0 == sub_28739C )
  {
    v13 = dword_48AD3C;
    goto LABEL_27;
  }
  v3 = a2;
  if ( dword_48AD40 )
    free((void *)dword_48AD40);
  if ( dword_48AD3C )
    sub_286184((_DWORD *)dword_48AD3C);
  v4 = (int (__fastcall *)(const char *, signed int))dword_48AD4C;
  dword_4900F4 = v3;
  dword_48AAA0 |= 0x4000u;
  dword_47074C = 1;
  dword_4900EC = dword_48AD34;
  dword_470740 = 32;
  dword_48AD30 = 37;
  dword_48AD44 = 0;
  dword_48AD48 = 0;
  dword_48AD3C = 0;
  dword_48ACC0 = 0;
  dword_48ACB8 = 0;
  dword_48ACBC = 0;
  if ( !dword_48AD4C )
  {
    v4 = (int (__fastcall *)(const char *, signed int))dword_48AD38;
    if ( !dword_48AD38 )
      v4 = (int (__fastcall *)(const char *, signed int))sub_284C1C;
  }
  dword_48AD54 = 0;
  v5 = dword_4900D8;
  v19 = 0;
  byte_48AD58 = 0;
  dword_48AD50 = dword_4900D8;
  if ( dword_4900D8 )
  {
    v14 = sub_286230(&v19, &dword_48AD54);
    v5 = dword_4900D8;
    byte_48AD58 = v14;
    v6 = dword_48AD50;
  }
  else
  {
    v6 = 0;
  }
  dword_48AD5C = v5;
  dword_4900D8 = v6;
  dword_48AD40 = sub_2912A8(v5, v6);
  v7 = sub_286D08((const char *)dword_48AD40, dword_48AD5C, dword_48AD50, v4, v19, (unsigned __int8)byte_48AD58);
  dword_48AD3C = (int)v7;
  if ( v7 )
  {
    v7 = (_DWORD *)sub_285C20((const char ***)&dword_48AD3C, dword_48ACC0);
    if ( v7 )
    {
      a1 = dword_48AD3C;
      dword_48AD44 = 0;
      v8 = *(_DWORD *)dword_48AD3C == 0;
      dword_48AAA0 &= ~0x4000u;
      if ( v8 )
        goto LABEL_38;
      v9 = dword_48AD3C;
      v10 = 1;
      do
      {
        v11 = *(_DWORD *)(v9 + 4);
        v9 += 4;
        v12 = v10++;
      }
      while ( v11 );
      dword_48AD44 = v12;
      if ( v12 == 1 || !dword_48AD08 )
      {
LABEL_28:
        a2 = dword_48AD44;
        if ( dword_48AD44 )
        {
          v16 = v2 + dword_48AD48;
          if ( v2 + dword_48AD48 < 0 )
          {
            do
            {
              v16 += dword_48AD44;
              if ( v16 >= 0 )
                break;
              v16 += dword_48AD44;
            }
            while ( v16 < 0 );
          }
          else
          {
            sub_347924(v16, dword_48AD44);
            v16 = a2;
          }
          dword_48AD48 = v16;
          if ( v16 || dword_48AD44 <= 1 )
          {
            sub_285F80(*(const char **)(dword_48AD3C + 4 * v16), dword_48AD5C, 1, &byte_48AD58);
            v17 = *(const char **)(dword_48AD3C + 4 * dword_48AD48);
            v18 = strcmp((const char *)dword_48AD40, v17);
            sub_2849A0((int)v17, dword_48AD54, (unsigned __int8)byte_48AD58, v18);
          }
          else
          {
            sub_2945C8(0, a2);
            sub_285F80((const char *)dword_48AD40, dword_48AD5C, 2, &byte_48AD58);
          }
          dword_48AD04 = 1;
          return 0;
        }
        goto LABEL_38;
      }
      a1 = sub_286AA8(dword_48AD3C);
      v13 = dword_48AD3C;
LABEL_27:
      if ( v13 )
        goto LABEL_28;
LABEL_38:
      sub_2945C8(a1, a2);
      if ( dword_48AD3C )
        free((void *)dword_48AD3C);
      dword_48AD3C = 0;
      dword_48AD04 = 0;
      return 0;
    }
  }
  sub_2945C8(v7, a2);
  if ( dword_48AD3C )
    free((void *)dword_48AD3C);
  dword_48AD3C = 0;
  if ( dword_48AD40 )
    free((void *)dword_48AD40);
  dword_48AD40 = 0;
  dword_48AD04 = 0;
  dword_48AAA0 &= ~0x4000u;
  return 0;
}
