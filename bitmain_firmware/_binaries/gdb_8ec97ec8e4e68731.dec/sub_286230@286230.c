int __fastcall sub_286230(int *a1, int *a2)
{
  int v2; // r5
  int v3; // r4
  int *v4; // r6
  bool v5; // r3
  int v6; // r8
  int v7; // r11
  int v8; // r9
  int v9; // r3
  int v10; // r8
  int v12; // r10
  unsigned __int8 *v13; // r3
  int v14; // r3
  char *v15; // r0
  char *v16; // r0
  char *v17; // r5
  int result; // r0
  int v19; // r1
  int v20; // r11
  int v21; // r0
  int v22; // [sp+4h] [bp-18h]
  int c; // [sp+8h] [bp-14h]
  int ca; // [sp+8h] [bp-14h]
  int cb; // [sp+8h] [bp-14h]
  int cc; // [sp+8h] [bp-14h]
  char *s; // [sp+14h] [bp-8h]

  v2 = dword_4900D8;
  if ( !off_48AD10 || (s = (char *)off_48AD10()) == 0 )
  {
    v3 = dword_48ACB4;
    s = (char *)dword_48AD14;
    if ( dword_48ACB4 )
      goto LABEL_4;
LABEL_58:
    v10 = dword_4900D8;
    if ( v2 == dword_4900D8 )
    {
      v4 = &dword_48AAD4;
      v22 = v3;
      goto LABEL_62;
    }
    v22 = v3;
    v12 = dword_48AAD4;
    v13 = (unsigned __int8 *)(dword_48AAD4 + dword_4900D8);
LABEL_31:
    v14 = *v13;
    if ( !v14 )
      goto LABEL_46;
    if ( off_48AD18 )
    {
      if ( !v22 )
      {
        cc = v14;
        v15 = strchr(s, v14);
        v14 = cc;
LABEL_36:
        if ( v15 )
          goto LABEL_37;
        goto LABEL_55;
      }
      c = v14;
      if ( !((int (__fastcall *)(int, int))off_48AD18)(v12, v10) )
      {
        v15 = strchr(s, c);
        v14 = c;
        goto LABEL_36;
      }
    }
    else
    {
      cb = v14;
      if ( strchr(s, v14) )
      {
        v14 = cb;
        goto LABEL_37;
      }
    }
LABEL_55:
    v14 = 0;
    goto LABEL_46;
  }
  v3 = dword_48ACB4;
  if ( !dword_48ACB4 )
    goto LABEL_58;
LABEL_4:
  v3 = 0;
  LOWORD(v4) = (unsigned __int16)&dword_48AAD4;
  if ( v2 <= 0 )
  {
    v22 = 0;
    HIWORD(v4) = (unsigned int)&dword_48AAD4 >> 16;
    v5 = 1;
    goto LABEL_26;
  }
  v6 = 0;
  v7 = 0;
  HIWORD(v4) = (unsigned int)&dword_48AAD4 >> 16;
  v22 = 0;
  do
  {
    if ( v6 )
    {
      v6 = 0;
    }
    else
    {
      v8 = *(unsigned __int8 *)(*v4 + v7);
      if ( v3 == 39 )
        goto LABEL_51;
      if ( v8 == 92 )
      {
        v6 = 1;
        v22 |= 4u;
        goto LABEL_21;
      }
      if ( v3 )
      {
LABEL_51:
        if ( v8 == v3 )
        {
          v3 = 0;
          dword_4900D8 = v2;
        }
      }
      else if ( strchr((const char *)dword_48ACB4, *(unsigned __int8 *)(*v4 + v7)) )
      {
        if ( v8 == 39 )
          v3 = 39;
        dword_4900D8 = v7 + 1;
        if ( v8 == 39 )
        {
          v22 |= 1u;
        }
        else
        {
          v3 = v8;
          if ( v8 == 34 )
            v9 = v22 | 2;
          else
            v9 = v22 | 8;
          v22 = v9;
        }
      }
    }
LABEL_21:
    if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
      ++v7;
    else
      v7 = sub_29B4D0(*v4);
  }
  while ( v2 > v7 );
  v5 = v3 == 0;
LABEL_26:
  v10 = dword_4900D8;
  if ( dword_4900D8 != v2 || !v5 )
  {
    v12 = *v4;
    v13 = (unsigned __int8 *)(*v4 + dword_4900D8);
    goto LABEL_31;
  }
LABEL_62:
  while ( 2 )
  {
    while ( 2 )
    {
      if ( _ctype_get_mb_cur_max() <= 1 )
      {
        v12 = *v4;
        v19 = dword_4900D8;
LABEL_64:
        v10 = v19 - 1;
      }
      else
      {
        v12 = *v4;
        v19 = dword_4900D8;
        if ( dword_48BB60 )
          goto LABEL_64;
        v21 = sub_29B610(*v4, dword_4900D8, 0);
        v12 = *v4;
        v10 = v21;
      }
      dword_4900D8 = v10;
      v13 = (unsigned __int8 *)(v12 + v10);
      if ( !v10 )
      {
        v3 = 0;
        goto LABEL_31;
      }
      v20 = *(unsigned __int8 *)(v12 + v10);
      if ( !strchr(s, v20) )
        continue;
      break;
    }
    if ( off_48AD18 )
    {
      if ( !v22 )
      {
        v14 = v20;
        v3 = 0;
        if ( v20 )
          goto LABEL_37;
        goto LABEL_46;
      }
      if ( !((int (__fastcall *)(int, int))off_48AD18)(v12, v10) )
      {
        v12 = *v4;
        v3 = 0;
        v10 = dword_4900D8;
        v13 = (unsigned __int8 *)(*v4 + dword_4900D8);
        goto LABEL_31;
      }
      continue;
    }
    break;
  }
  v14 = v20;
  if ( !v20 )
  {
    v3 = 0;
    goto LABEL_46;
  }
  v3 = (int)off_48AD18;
LABEL_37:
  v16 = off_47075C;
  if ( off_47075C && (ca = v14, v16 = strchr(off_47075C, v14), v14 = ca, v16) )
  {
    if ( v2 - dword_4900D8 < 2 )
      v17 = 0;
    else
      v17 = (char *)ca;
  }
  else
  {
    v17 = v16;
  }
  if ( dword_48AD1C && strchr((const char *)dword_48AD1C, v14) )
  {
    v14 = (int)v17;
  }
  else
  {
    v14 = (int)v17;
    ++dword_4900D8;
  }
LABEL_46:
  result = v3;
  if ( a1 )
    *a1 = v22;
  if ( a2 )
    *a2 = v14;
  return result;
}
