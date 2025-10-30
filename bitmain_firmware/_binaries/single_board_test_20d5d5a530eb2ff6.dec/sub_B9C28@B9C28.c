unsigned int __fastcall sub_B9C28(int a1, _DWORD *a2, _DWORD *a3, int a4, int a5, int a6, _DWORD *a7)
{
  int v10; // r5
  unsigned int result; // r0
  int v12; // r8
  int v13; // r5
  int v14; // r3
  int v15; // r9
  int v16; // r0
  int v17; // r5
  _DWORD *v18; // r2
  unsigned int v19; // r3
  int v20; // t1
  _DWORD *v21; // r2
  bool v22; // cc
  bool v23; // zf
  bool v24; // cc
  _DWORD *v25; // [sp+14h] [bp-28h]
  int v26; // [sp+18h] [bp-24h]
  int v27; // [sp+1Ch] [bp-20h]
  int v28; // [sp+1Ch] [bp-20h]
  _DWORD *v30; // [sp+24h] [bp-18h]
  int v31; // [sp+28h] [bp-14h]
  int v32; // [sp+2Ch] [bp-10h]
  _DWORD *v33; // [sp+30h] [bp-Ch]
  int n; // [sp+34h] [bp-8h]

  if ( a4 <= 7 )
    return sub_B9890(a1, a2, a4 + a5, a3, a6 + a4);
  v26 = a4;
  v30 = &a2[a4];
  v27 = a4 - a5;
  v25 = &a3[a4];
  v10 = 3 * sub_B847C((int)a2, (int)v30, a5, a4 - a5);
  switch ( sub_B847C((int)v25, (int)a3, a6, a6 - a4) + v10 )
  {
    case -4:
      v12 = 2 * a4;
      sub_B9740((int)a7, (int)v30, (int)a2, a5, a5 - a4);
      v32 = 0;
      v33 = &a7[v26];
      sub_B9740((int)&a7[v26], (int)a3, (int)v25, a6, a4 - a6);
      if ( a4 != 8 )
        goto LABEL_6;
      goto LABEL_20;
    case -3:
    case -2:
      v33 = &a7[v26];
      sub_B9740((int)a7, (int)v30, (int)a2, a5, a5 - a4);
      v32 = 1;
      sub_B9740((int)&a7[v26], (int)v25, (int)a3, a6, a6 - a4);
      break;
    case -1:
    case 0:
    case 1:
    case 2:
      v33 = &a7[v26];
      sub_B9740((int)a7, (int)a2, (int)v30, a5, v27);
      sub_B9740((int)&a7[v26], (int)a3, (int)v25, a6, a4 - a6);
      v32 = 1;
      break;
    case 3:
    case 4:
      v33 = &a7[v26];
      sub_B9740((int)a7, (int)a2, (int)v30, a5, v27);
      v32 = 0;
      sub_B9740((int)&a7[v26], (int)v25, (int)a3, a6, a6 - a4);
      break;
    default:
      v33 = &a7[v26];
      v32 = 0;
      break;
  }
  v12 = 2 * a4;
  if ( a4 == 8 )
  {
LABEL_20:
    v28 = (int)(a7 + 16);
    sub_12FCE4(a7 + 16, a7, v33);
    v21 = a3;
    v15 = a1 + 64;
    sub_12FCE4(a1, a2, v21);
    sub_B9890(a1 + 64, v30, a5, v25, a6);
  }
  else
  {
LABEL_6:
    v13 = a4 >> 1;
    n = 8 * a4;
    v28 = (int)&a7[2 * a4];
    v31 = (int)&a7[4 * a4];
    sub_B9930(v28, a7, v33, a4, 0, 0, v31);
    sub_B9930(a1, a2, a3, a4, 0, 0, v31);
    if ( a5 <= a6 )
      v14 = a6 - v13;
    else
      v14 = a5 - v13;
    if ( !v14 )
    {
      v15 = n + a1;
      sub_B9930(n + a1, v30, v25, a4 >> 1, a5 - v13, a6 - v13, v31);
      memset((void *)(a1 + 4 * (v12 + 2 * v13)), 0, 4 * (v12 - 2 * v13));
      goto LABEL_13;
    }
    if ( v14 <= 0 )
    {
      v15 = a1 + n;
      memset((void *)(a1 + n), 0, n);
      v22 = a5 <= 15;
      if ( a5 <= 15 )
        v22 = a6 <= 15;
      if ( v22 )
      {
        sub_B9890(v15, v30, a5, v25, a6);
      }
      else
      {
        do
        {
          v13 /= 2;
          v24 = a6 <= v13;
          if ( a6 <= v13 )
            v24 = a5 <= v13;
          if ( !v24 )
          {
            sub_B9C28(v15, v30, v25, v13, a5 - v13, a6 - v13, v31);
            goto LABEL_13;
          }
          v23 = a6 == v13;
          if ( a6 != v13 )
            v23 = a5 == v13;
        }
        while ( !v23 );
        sub_B9930(v15, v30, v25, v13, a5 - v13, a6 - v13, v31);
      }
      goto LABEL_13;
    }
    v15 = n + a1;
    sub_B9C28(n + a1, v30, v25, a4 >> 1, a5 - v13, a6 - v13, v31);
  }
  memset((void *)(a1 + 4 * (v12 + a5 + a6)), 0, 4 * (v12 - a5 - a6));
LABEL_13:
  v16 = bn_add_words(a7, a1, v15, v12);
  if ( v32 )
    v17 = v16 - bn_sub_words(v28, a7, v28, v12);
  else
    v17 = v16 + bn_add_words(v28, v28, a7, v12);
  result = bn_add_words(v26 * 4 + a1, v26 * 4 + a1, v28, v12) + v17;
  if ( result )
  {
    v18 = (_DWORD *)(a1 + 4 * (a4 + v12));
    v19 = *v18 + result;
    *v18 = v19;
    if ( result > v19 )
    {
      do
      {
        v20 = v18[1];
        *++v18 = v20 + 1;
      }
      while ( v20 == -1 );
    }
  }
  return result;
}
