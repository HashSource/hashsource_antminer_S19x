int __fastcall sub_2A8FD0(int *a1)
{
  int v2; // r0
  FILE *v3; // r0
  int v5; // r1
  int v6; // r0
  FILE *v7; // r0
  char v8; // r3
  int v9; // [sp+0h] [bp-68h] BYREF
  __int64 v10; // [sp+30h] [bp-38h]

  *((_BYTE *)a1 + 43) |= 2u;
  if ( sub_2A8CC8() <= dword_48BBE8 && !sub_2A8DC4() )
    return 0;
  v2 = *a1;
  if ( ((*((unsigned __int8 *)a1 + 40) >> 3) & 3u) < 2 )
  {
    v7 = sub_2A8794(v2, (int)"r");
    a1[2] = (int)v7;
    goto LABEL_10;
  }
  if ( (*((_BYTE *)a1 + 43) & 8) == 0 )
  {
    if ( !_xstat64(3, *a1, &v9) )
    {
      v6 = *a1;
      if ( !v10 )
        goto LABEL_9;
      sub_327194(v6, v5, v10, v10 | HIDWORD(v10));
    }
    v6 = *a1;
LABEL_9:
    v7 = sub_2A8794(v6, (int)"w+");
    v8 = *((_BYTE *)a1 + 43);
    a1[2] = (int)v7;
    *((_BYTE *)a1 + 43) = v8 | 8;
    goto LABEL_10;
  }
  v3 = sub_2A8794(v2, (int)"r+");
  a1[2] = (int)v3;
  if ( v3 )
    goto LABEL_5;
  v7 = sub_2A8794(*a1, (int)"w+");
  a1[2] = (int)v7;
LABEL_10:
  if ( !v7 )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(1);
    return a1[2];
  }
LABEL_5:
  if ( sub_2A8E98((int)a1) )
    return a1[2];
  return 0;
}
