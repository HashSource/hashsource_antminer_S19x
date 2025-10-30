int __fastcall sub_15DC28(int *a1, int a2, int *a3, unsigned __int8 *a4, int a5)
{
  int v6; // r1
  unsigned __int8 *v7; // r6
  int v9; // r7
  int v10; // r5
  int result; // r0
  unsigned __int8 *v12; // r8
  int v13; // r0
  int v14; // r2
  unsigned __int8 *v15; // r9
  unsigned __int8 *v16; // r4
  int v17; // t1
  int v18; // r4
  int v19; // r0
  int v20; // r0
  int v21; // r0

  v7 = (unsigned __int8 *)(a1 + 2);
  v6 = *a1;
  v9 = a5;
  if ( *a1 > 0 && v7[v6 - 1] == 61 )
  {
    if ( v6 == 1 )
    {
      v10 = 1;
    }
    else if ( v7[v6 - 2] == 61 )
    {
      v10 = 2;
    }
    else
    {
      v10 = 1;
    }
  }
  else
  {
    v10 = 0;
  }
  result = a5;
  if ( !a5 )
    goto LABEL_23;
  if ( (a1[23] & 2) != 0 )
    v12 = (unsigned __int8 *)&unk_1DC220;
  else
    v12 = (unsigned __int8 *)&unk_1DC1A0;
  if ( a5 > 0 )
  {
    v13 = *a4;
    if ( (v13 & 0x80) != 0 || (v14 = v12[v13], v14 == 255) )
    {
      v9 = 0;
      result = -1;
      goto LABEL_23;
    }
    v15 = &a4[a5];
    v16 = a4 + 1;
    v9 = 0;
    while ( 1 )
    {
      if ( v13 == 61 )
      {
        if ( ++v10 == 3 )
          goto LABEL_22;
        if ( v14 == 242 )
        {
LABEL_27:
          if ( v6 <= 0 )
          {
            result = 0;
            goto LABEL_23;
          }
          if ( v6 << 30 )
          {
LABEL_22:
            result = -1;
            goto LABEL_23;
          }
          v18 = 1;
LABEL_32:
          v19 = sub_15D958((int)a1, a2, v7, v6);
          v6 = (v19 < v10) | ((unsigned int)v19 >> 31);
          if ( v6 )
          {
LABEL_48:
            v6 = 0;
            result = -1;
            goto LABEL_23;
          }
          v9 += v19 - v10;
          result = 0;
          if ( !v18 )
          {
            v6 = 0;
            goto LABEL_39;
          }
          goto LABEL_23;
        }
      }
      else
      {
        if ( v10 && (v14 | 0x13) != 0xF3 )
          goto LABEL_22;
        if ( v14 == 242 )
          goto LABEL_27;
      }
      if ( (v14 | 0x13) != 0xF3 )
      {
        if ( v6 > 63 )
          goto LABEL_22;
        v7[v6++] = v13;
      }
      if ( v6 == 64 )
      {
        v20 = sub_15D958((int)a1, a2, v7, 64);
        v6 = (v10 > v20) | ((unsigned int)v20 >> 31);
        if ( v6 )
          goto LABEL_48;
        v21 = v20 - v10;
        v9 += v21;
        a2 += v21;
        if ( v16 == v15 )
          goto LABEL_37;
      }
      else if ( v16 == v15 )
      {
        goto LABEL_37;
      }
      v17 = *v16++;
      v13 = v17;
      if ( (v17 & 0x80) == 0 )
      {
        v14 = v12[v13];
        if ( v14 != 255 )
          continue;
      }
      goto LABEL_22;
    }
  }
  v9 = 0;
LABEL_37:
  if ( v6 > 0 )
  {
    v18 = v6 & 3;
    if ( (v6 & 3) == 0 )
      goto LABEL_32;
  }
LABEL_39:
  result = v10 == 0;
  if ( v6 )
    result = 1;
LABEL_23:
  *a3 = v9;
  *a1 = v6;
  return result;
}
