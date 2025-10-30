int __fastcall sub_1B3430(int a1)
{
  int v1; // r4
  int v3; // r4
  size_t n; // r7
  size_t v6; // r10
  size_t v7; // r8
  size_t v8; // r11
  char *v9; // r6
  unsigned __int8 *v10; // r9
  char *v11; // r5
  char *v12; // r8
  int v13; // r0
  int v14; // r8
  int v15; // r5
  bool v16; // zf
  int v17; // r5
  unsigned int v18; // r0
  int v19; // r3
  bool v20; // zf
  char *v21; // r0
  unsigned int v22; // r5
  unsigned int v23; // r0
  unsigned int v24; // r3
  int v25; // r3
  unsigned int v26; // r0
  int v27; // r0
  const char *v28; // r0
  void *v29; // [sp+10h] [bp-4Ch]
  void *dest; // [sp+14h] [bp-48h]
  unsigned int v31; // [sp+18h] [bp-44h]
  int v32; // [sp+1Ch] [bp-40h]
  char *s; // [sp+24h] [bp-38h]
  int v34; // [sp+28h] [bp-34h]
  int v35; // [sp+34h] [bp-28h]
  int v36[4]; // [sp+38h] [bp-24h] BYREF
  int v37; // [sp+48h] [bp-14h] BYREF
  int v38; // [sp+4Ch] [bp-10h]
  int v39; // [sp+50h] [bp-Ch]
  int v40; // [sp+54h] [bp-8h]

  v1 = *(_DWORD *)(a1 + 36);
  sub_1B2570(v36, a1);
  if ( !(*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)(*(_DWORD *)(v1 + 4) + 444) + 344))(
          v1,
          0,
          *(_DWORD *)(v1 + 160) + 56) )
  {
    v27 = sub_2A6910(0);
    v28 = (const char *)sub_2A6920(v27);
    sub_946E0("Error reading symbol table: %s", v28);
  }
  sub_1AE5B8((int)v36, a1, *(_DWORD *)(*(_DWORD *)(v1 + 4) + 444) + 224, (_DWORD *)(*(_DWORD *)(v1 + 160) + 56));
  v3 = *(_DWORD *)(a1 + 36);
  if ( sub_2A6780(v3) == 38 )
  {
    v38 = 0;
    v37 = 0;
    v39 = 0;
    v40 = 0;
    sub_2ADCFC(v3, sub_1B3394, &v37);
    if ( v37 )
    {
      if ( v38 && v39 && v40 )
      {
        n = *(_DWORD *)(v37 + 36);
        v6 = *(_DWORD *)(v38 + 36);
        v7 = *(_DWORD *)(v39 + 36);
        v8 = *(_DWORD *)(v40 + 36);
        v9 = (char *)sub_93028(n);
        v29 = sub_9253C((int)sub_1B3388, (int)v9);
        v10 = (unsigned __int8 *)sub_93028(v6);
        sub_9253C((int)sub_1B3388, (int)v10);
        v11 = (char *)sub_93028(v7);
        sub_9253C((int)sub_1B3388, (int)v11);
        dest = sub_93028(v8);
        sub_9253C((int)sub_1B3388, (int)dest);
        if ( sub_2ADEDC(v3, v37, v9, v37, 0, 0, n) )
        {
          if ( sub_2ADEDC(v3, v38, v10, v38, 0, 0, v6) )
          {
            if ( sub_2ADEDC(v3, v39, v11, v39, 0, 0, v7) )
            {
              if ( sub_2ADEDC(v3, v40, dest, v40, 0, 0, v8) )
              {
                v12 = &v11[v7];
                if ( v11 < v12 )
                {
                  v31 = -1;
                  v32 = -1;
                  do
                  {
                    v13 = (*(int (__fastcall **)(char *))(*(_DWORD *)(v3 + 4) + 76))(v11);
                    if ( !v13 )
                      break;
                    if ( v13 == 1879048202 )
                    {
                      if ( v32 < 0 )
                        v32 = (*(int (__fastcall **)(char *))(*(_DWORD *)(v3 + 4) + 76))(v11 + 8);
                    }
                    else if ( ((v13 == 1879048211) & (v31 >> 31)) != 0 )
                    {
                      v31 = (*(int (__fastcall **)(char *))(*(_DWORD *)(v3 + 4) + 76))(v11 + 8);
                    }
                    v11 += 16;
                  }
                  while ( v12 > v11 );
                  if ( ((v32 | v31) & 0x80000000) == 0 )
                  {
                    v35 = *(_DWORD *)(v3 + 124);
                    if ( n / 0x18 > 1 )
                    {
                      v14 = 1;
                      while ( 1 )
                      {
                        v17 = 24 * v14;
                        v18 = (*(int (__fastcall **)(char *))(*(_DWORD *)(v3 + 4) + 76))(&v9[24 * v14]);
                        if ( v6 <= v18 )
                          goto LABEL_28;
                        v19 = v10[v18];
                        s = (char *)&v10[v18];
                        v20 = v19 == 46;
                        if ( v19 != 46 )
                          v20 = v19 == 0;
                        if ( v20 )
                          goto LABEL_28;
                        v34 = (*(int (__fastcall **)(char *))(*(_DWORD *)(v3 + 4) + 64))(&v9[v17 + 8]);
                        v21 = &v9[v17 + 22];
                        v22 = (unsigned __int8)v9[24 * v14 + 20];
                        v23 = (*(int (__fastcall **)(char *))(*(_DWORD *)(v3 + 4) + 88))(v21);
                        v24 = v22 >> 4;
                        if ( v23 >= 0xFF00 )
                          v23 -= 0x10000;
                        if ( !v23 )
                          break;
                        if ( !v35 )
                        {
                          switch ( v23 )
                          {
                            case 0xFFFFFF01:
                              if ( v24 == 1 )
                                v25 = 1;
                              else
                                v25 = 8;
                              break;
                            case 0xFFFFFF02:
                              if ( v24 == 1 )
                                v25 = 4;
                              else
                                v25 = 9;
                              break;
                            case 0xFFFFFF00:
                              if ( v24 == 1 )
                                v25 = 5;
                              else
                                v25 = 10;
                              break;
                            case 0xFFFFFFF1:
                              v25 = 6;
                              break;
                            default:
                              goto LABEL_28;
                          }
                          goto LABEL_43;
                        }
LABEL_28:
                        if ( n / 0x18 == ++v14 )
                          goto LABEL_21;
                      }
                      v15 = v22 & 0xF;
                      v16 = v24 == 1;
                      if ( v24 == 1 )
                        v16 = v15 == 2;
                      if ( !v16 )
                        goto LABEL_28;
                      if ( !v34 )
                      {
                        v26 = 8 * (v32 - v31 + v14);
                        if ( (v8 <= v26) | (v26 >> 31) )
                          goto LABEL_28;
                        v34 = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)(v3 + 4) + 64))((unsigned int)dest + v26);
                        if ( !v34 )
                          goto LABEL_28;
                      }
                      v25 = 7;
LABEL_43:
                      sub_1B27C0(v36, s, v34, v25);
                      goto LABEL_28;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_21:
        sub_92620(v29);
      }
    }
  }
  sub_1B2CF4((int)v36);
  return sub_1B2584((int)v36);
}
