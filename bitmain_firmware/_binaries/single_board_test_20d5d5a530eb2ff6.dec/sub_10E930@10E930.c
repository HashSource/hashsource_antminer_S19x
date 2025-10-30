int __fastcall sub_10E930(signed int *a1, int a2, _DWORD *a3, unsigned int a4)
{
  int v7; // r4
  signed int v8; // r5
  int v9; // r0
  int v10; // r1
  int *v11; // r9
  int result; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r3
  int v20; // r10
  int v21; // r1
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  bool v26; // zf
  bool v27; // zf
  int v28; // r4
  int v29; // r0
  int v30; // r0
  int v31; // r0
  bool v32; // zf
  unsigned int v33; // [sp+4h] [bp-2Ch]

  if ( (a4 & 0x30000) == 0 )
    return 0;
  v7 = a2;
  v8 = 0;
  if ( !a2 )
  {
    v8 = 1;
    v7 = sub_10C01C(a3, 0);
  }
  v9 = sub_10E89C(v7);
  v11 = (int *)v9;
  if ( !a3 )
  {
    if ( !v9 )
      return 57;
    if ( sub_DA19C(v9) != 408 )
      return 57;
    v13 = sub_DA1F4(v11);
    v14 = sub_C59B8(v13);
    if ( !v14 )
      return 57;
    v15 = sub_C6284(v14);
    if ( v15 == 715 )
    {
      if ( (a4 & 0x20000) == 0 )
        return 60;
    }
    else
    {
      if ( v15 != 415 )
        return 58;
      if ( (a4 & 0x10000) == 0 )
        return 60;
    }
    return 0;
  }
  if ( sub_10FD34(v7, v10) != 2 )
  {
    v8 = 0;
    result = 56;
    goto LABEL_8;
  }
  if ( !v11 || sub_DA19C((int)v11) != 408 )
  {
    v8 = 0;
    result = 57;
    goto LABEL_8;
  }
  v16 = sub_DA1F4(v11);
  v17 = sub_C59B8(v16);
  if ( !v17 )
  {
    result = 57;
    goto LABEL_29;
  }
  v18 = sub_C6284(v17);
  if ( v18 == 715 )
  {
    v19 = a4 & 0x20000;
    if ( (a4 & 0x20000) != 0 )
    {
      v33 = a4 & 0xFFFEFFFF;
      goto LABEL_36;
    }
  }
  else
  {
    if ( v18 != 415 )
    {
      result = 58;
LABEL_29:
      v8 = 0;
      goto LABEL_8;
    }
    v19 = a4 & 0x10000;
    if ( (a4 & 0x10000) != 0 )
    {
      v33 = a4;
LABEL_36:
      while ( v8 < sub_10C010((int)a3) )
      {
        v20 = sub_116928(v7);
        v7 = sub_10C01C(a3, v8);
        if ( sub_10FD34(v7, v21) != 2 )
        {
          result = 56;
          goto LABEL_8;
        }
        v22 = sub_10E89C(v7);
        v11 = (int *)v22;
        if ( !v22 )
          goto LABEL_41;
        if ( sub_DA19C(v22) != 408 )
          goto LABEL_41;
        v23 = sub_DA1F4(v11);
        v24 = sub_C59B8(v23);
        if ( !v24 )
          goto LABEL_41;
        v25 = sub_C6284(v24);
        if ( v25 == 715 )
        {
          v26 = v20 == -1;
          if ( v20 != -1 )
            v26 = v20 == 795;
          if ( !v26 )
            goto LABEL_49;
          if ( (v33 & 0x20000) == 0 )
            goto LABEL_61;
          v33 &= ~0x10000u;
        }
        else
        {
          if ( v25 != 415 )
            goto LABEL_45;
          v27 = v20 == -1;
          if ( v20 != -1 )
            v27 = v20 == 794;
          if ( !v27 )
            goto LABEL_49;
          if ( (v33 & 0x10000) == 0 )
            goto LABEL_61;
        }
        ++v8;
      }
      v28 = sub_116928(v7);
      if ( sub_DA19C((int)v11) != 408 || (v29 = sub_DA1F4(v11), (v30 = sub_C59B8(v29)) == 0) )
      {
LABEL_41:
        result = 57;
        goto LABEL_8;
      }
      v31 = sub_C6284(v30);
      if ( v31 == 715 )
      {
        v32 = v28 == -1;
        if ( v28 != -1 )
          v32 = v28 == 795;
        if ( v32 )
        {
          if ( (v33 & 0x20000) != 0 )
            return 0;
LABEL_61:
          result = 60;
LABEL_50:
          if ( v8 )
            --v8;
          if ( result == 60 && a4 != v33 )
            result = 61;
          goto LABEL_8;
        }
      }
      else
      {
        if ( v31 != 415 )
        {
LABEL_45:
          result = 58;
          goto LABEL_8;
        }
        if ( v28 == -1 || v28 == 794 )
        {
          if ( (v33 & 0x10000) != 0 )
            return 0;
          goto LABEL_61;
        }
      }
LABEL_49:
      result = 59;
      goto LABEL_50;
    }
  }
  v8 = v19;
  result = 60;
LABEL_8:
  if ( a1 )
    *a1 = v8;
  return result;
}
