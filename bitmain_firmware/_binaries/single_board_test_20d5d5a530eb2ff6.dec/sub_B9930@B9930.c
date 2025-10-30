char *__fastcall sub_B9930(int a1, _DWORD *a2, _DWORD *a3, int a4, int a5, int a6, int a7)
{
  bool v9; // zf
  char *result; // r0
  int v11; // r11
  int v12; // r7
  int v13; // r8
  bool v14; // r3
  int v15; // r1
  int v16; // r8
  int v17; // r7
  void *v18; // r10
  int v19; // r8
  int v20; // r0
  int v21; // r5
  _DWORD *v22; // r2
  char *v23; // r3
  int v24; // t1
  _BOOL4 v25; // r3
  _BOOL4 v26; // r2
  int v29; // [sp+24h] [bp-18h]
  int v30; // [sp+28h] [bp-14h]
  int v31; // [sp+2Ch] [bp-10h]
  int v32; // [sp+30h] [bp-Ch]
  int v33; // [sp+30h] [bp-Ch]
  int v34; // [sp+34h] [bp-8h]

  v9 = a4 == 8;
  if ( a4 == 8 )
    v9 = a5 == 0;
  if ( v9 )
  {
    if ( !a6 )
      return (char *)((int (*)(void))sub_12FCE4)();
  }
  else if ( a4 > 15 )
  {
    v11 = a4 >> 1;
    v29 = 4 * (a4 >> 1);
    v12 = (int)&a3[v29 / 4u];
    v30 = (int)&a2[v29 / 4u];
    v31 = (int)&a3[v29 / 4u];
    v32 = a6 + (a4 >> 1);
    v13 = 3 * sub_B847C((int)a2, (int)&a2[v29 / 4u], (a4 >> 1) + a5, -a5);
    switch ( sub_B847C(v12, (int)a3, a6 + (a4 >> 1), a6) + v13 )
    {
      case -4:
        v34 = a7 + v29;
        sub_B9740(a7, v30, (int)a2, (a4 >> 1) + a5, a5);
        sub_B9740(a7 + v29, (int)a3, v31, v32, -a6);
        v33 = 0;
        goto LABEL_27;
      case -3:
      case -1:
      case 0:
      case 1:
      case 3:
        v14 = v11 == 8 && a5 == 0;
        if ( a6 )
          v15 = 0;
        else
          v15 = v14;
        if ( !v15 )
        {
          v16 = 4 * a4;
          v33 = 0;
          v17 = a7 + 8 * a4;
          v18 = (void *)(a7 + 4 * a4);
          memset(v18, 0, 4 * a4);
          goto LABEL_18;
        }
        v16 = 4 * a4;
        v33 = 0;
        v18 = (void *)(a7 + 4 * a4);
        memset(v18, 0, 0x40u);
        goto LABEL_40;
      case -2:
        v34 = a7 + v29;
        sub_B9740(a7, v30, (int)a2, (a4 >> 1) + a5, a5);
        v33 = 1;
        sub_B9740(a7 + v29, v31, (int)a3, a6 + (a4 >> 1), a6);
        goto LABEL_27;
      case 2:
        v34 = a7 + v29;
        sub_B9740(a7, (int)a2, v30, (a4 >> 1) + a5, -a5);
        sub_B9740(a7 + v29, (int)a3, v31, v32, -a6);
        v33 = 1;
        goto LABEL_27;
      case 4:
        v34 = a7 + v29;
        sub_B9740(a7, (int)a2, v30, (a4 >> 1) + a5, -a5);
        v33 = 0;
        sub_B9740(a7 + v29, v31, (int)a3, a6 + (a4 >> 1), a6);
LABEL_27:
        v25 = a6 == 0;
        goto LABEL_28;
      default:
        v33 = 0;
        v25 = a6 == 0;
        v34 = a7 + v29;
LABEL_28:
        v16 = 4 * a4;
        v26 = v11 == 8 && a5 == 0;
        if ( v25 && v26 )
        {
          v18 = (void *)(a7 + v16);
          sub_12FCE4(a7 + v16, a7, v34);
LABEL_40:
          v19 = v16 + a1;
          sub_12FCE4(a1, a2, a3);
          sub_12FCE4(v19, v30, v31);
        }
        else
        {
          v18 = (void *)(a7 + v16);
          v17 = a7 + 8 * a4;
          sub_B9930(a7 + v16, a7, v34, a4 >> 1, 0, 0, v17);
LABEL_18:
          v19 = v16 + a1;
          sub_B9930(a1, a2, a3, a4 >> 1, 0, 0, v17);
          sub_B9930(v19, v30, v31, a4 >> 1, a5, a6, v17);
        }
        v20 = bn_add_words(a7, a1, v19, a4);
        if ( v33 )
          v21 = v20 - bn_sub_words(v18, a7, v18, a4);
        else
          v21 = v20 + bn_add_words(v18, v18, a7, a4);
        result = (char *)(bn_add_words(v29 + a1, v29 + a1, v18, a4) + v21);
        if ( result )
        {
          v22 = (_DWORD *)(a1 + 4 * (a4 + v11));
          v23 = &result[*v22];
          *v22 = v23;
          if ( result > v23 )
          {
            do
            {
              v24 = v22[1];
              *++v22 = v24 + 1;
            }
            while ( v24 == -1 );
          }
        }
        break;
    }
    return result;
  }
  result = (char *)sub_B9890(a1, a2, a4 + a5, a3, a4 + a6);
  if ( a5 + a6 < 0 )
    return (char *)j_memset((void *)(a1 + 4 * (a6 + a4 + a4 + a5)), 0, -4 * (a5 + a6));
  return result;
}
