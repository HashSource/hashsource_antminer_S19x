int __fastcall sub_2058D4(unsigned __int8 **a1, int a2, int *a3, int a4)
{
  int v4; // r4
  int v5; // r5
  unsigned __int8 *v6; // r12
  int v7; // r2
  int v8; // lr
  bool v9; // zf
  int v10; // r8
  int v11; // r10
  int v12; // r11
  int v13; // r7
  int v14; // r6
  int v15; // r9
  int v16; // r4
  int v17; // r11
  unsigned __int8 *v18; // lr
  int v19; // r12
  bool v20; // zf
  int v21; // r4
  bool v22; // zf
  int result; // r0
  char v24; // r5
  int v25; // r3
  int v26; // t1
  unsigned __int8 *v27; // r7
  int v28; // t1
  unsigned int v29; // r4
  int v30; // r10
  int v31; // r7
  unsigned int v32; // r7
  int v33; // lr
  bool v34; // zf
  int v35; // [sp+4h] [bp-10h]
  int v36; // [sp+8h] [bp-Ch]

  v6 = *a1;
  v8 = (int)(*a1 + 1);
  v7 = **a1;
  v9 = v7 == 45;
  if ( v7 == 45 )
  {
    v7 = v6[1];
    v4 = (int)(v6 + 2);
  }
  else
  {
    v5 = 1;
  }
  if ( v9 )
  {
    ++v6;
    v5 = 0;
    v36 = -1;
    v8 = v4;
  }
  else
  {
    v36 = v5;
  }
  if ( v7 != 48 )
  {
    LOBYTE(v5) = 0;
    v10 = 214748364;
    v11 = 0;
    v12 = 10;
    v35 = 2;
    goto LABEL_9;
  }
  v7 = v6[1];
  v6 = (unsigned __int8 *)v8;
  if ( v7 == 48 )
  {
    do
    {
      v26 = *++v6;
      v7 = v26;
    }
    while ( v26 == 48 );
  }
  if ( !v5 )
  {
    LOBYTE(v5) = 1;
    v12 = 8;
    v10 = 0xFFFFFFF;
    v35 = 2;
    v11 = 0;
    goto LABEL_9;
  }
  if ( a4 <= 0 )
  {
    v10 = 0xFFFFFFF;
    v12 = 8;
    v35 = 2;
    v11 = 0;
    v36 = 1;
    goto LABEL_9;
  }
  if ( (unsigned int)(v7 - 48) > 7 )
  {
    v29 = 0;
    v30 = a4 / 3;
    v31 = a4 % 3;
LABEL_64:
    v34 = v29 == v30;
    if ( v29 == v30 )
      v34 = v31 == 0;
    v11 = v34;
    if ( !v34 )
    {
      v12 = 8;
      v10 = 0xFFFFFFF;
      v35 = 2;
      v36 = 1;
      goto LABEL_9;
    }
    v31 = 0;
    goto LABEL_59;
  }
  v27 = v6;
  do
    v28 = *++v27;
  while ( (unsigned int)(v28 - 48) <= 7 );
  v29 = v27 - v6;
  v30 = a4 / 3;
  v31 = a4 % 3;
  if ( a4 / 3 >= v29 )
    goto LABEL_64;
LABEL_59:
  v12 = 8;
  v10 = 0xFFFFFFF;
  v32 = (v31 + 2) % 3u;
  v11 = ((v7 - 48) >> v32) & 1;
  v35 = 2 << v32;
  if ( v11 )
    v33 = -1;
  else
    v33 = 1;
  v36 = v33;
LABEL_9:
  v13 = 0;
  v14 = v12;
  v15 = v12 + 47;
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    v18 = v6 + 1;
    if ( v7 <= 47 || v15 < v7 )
      break;
    if ( v16 <= v10 )
    {
      v19 = v7 - 48;
      if ( v11 )
      {
        v20 = v16 == 0;
        if ( v16 )
          v21 = v14 * v16;
        else
          v21 = v35;
        if ( v20 )
          v21 |= 2 * v19;
        v16 = v21 - v19;
      }
      else
      {
        v16 = v19 + v14 * v16;
      }
    }
    else
    {
      v17 = 1;
    }
    if ( v14 == 8 )
    {
      if ( v13 )
      {
        v13 += 3;
      }
      else if ( v7 != 48 )
      {
        if ( v7 == 49 )
        {
          v13 = 1;
        }
        else if ( (unsigned int)(v7 - 50) <= 1 )
        {
          v13 = 2;
        }
        else
        {
          v13 = 3;
        }
      }
    }
    v7 = *v18;
    v6 = v18;
  }
  if ( a2 )
  {
    v22 = v7 == 0;
    if ( v7 )
      v22 = v7 == a2;
    if ( !v22 )
      goto LABEL_36;
    ++v6;
  }
  if ( a4 > 0 )
    v24 = v5 & 1;
  else
    v24 = 0;
  if ( v13 > a4 )
    v25 = v24 & 1;
  else
    v25 = 0;
  if ( v25 )
    goto LABEL_36;
  *a1 = v6;
  if ( !v17 )
  {
    *a3 = 0;
    return v16 * v36;
  }
  if ( !v13 )
  {
LABEL_36:
    *a3 = -1;
    return 0;
  }
  result = 0;
  if ( ((v36 == -1) & ((unsigned __int8)v11 ^ 1)) != 0 )
    ++v13;
  *a3 = v13;
  return result;
}
