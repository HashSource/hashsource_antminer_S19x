int __fastcall sub_1BACD4(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r0
  bool v9; // cc
  _DWORD *v10; // r4
  _DWORD *v11; // r5
  int v12; // r0
  int v13; // t1
  int result; // r0
  int v15; // r2
  char *v16; // r3
  int v17; // [sp+4h] [bp-28h]
  __int64 v18; // [sp+8h] [bp-24h]
  __int64 v19; // [sp+18h] [bp-14h] BYREF
  __int64 v20; // [sp+20h] [bp-Ch] BYREF

  v8 = ((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_487C28);
  v9 = (unsigned int)a5 > 8;
  if ( a5 != 8 )
    v9 = (unsigned int)(a5 - 2) > 2;
  if ( v9 )
  {
    if ( a5 != 16 )
      sub_946E0("Invalid OpenCL vector size: %d", a5);
  }
  else if ( a5 == 3 )
  {
    v17 = 4 * a3;
    goto LABEL_7;
  }
  v17 = a3 * a5;
LABEL_7:
  v10 = (_DWORD *)(v8 - 4);
  v11 = (_DWORD *)(v8 + 300);
  LODWORD(v18) = a5;
  while ( 1 )
  {
    v13 = v10[1];
    ++v10;
    v12 = v13;
    if ( (int *)(**(_DWORD **)(v13 + 24) & ((unsigned int)off_100FC + 3)) == (int *)((char *)&dword_10000 + 2) )
    {
      if ( sub_171B30(v12, &v19, &v20) )
      {
        result = *v10;
        v15 = *(_DWORD *)(*(_DWORD *)(*v10 + 24) + 20);
        v16 = *(char **)(v15 + 24);
        if ( *v16 == a2 && (v16[1] & 1) == a4 && *(_DWORD *)(v15 + 20) == a3 && *(_DWORD *)(result + 20) == v17 )
        {
          HIDWORD(v18) = a5 >> 31;
          if ( v20 - v19 + 1 == v18 )
            break;
        }
      }
    }
    if ( v10 == v11 )
      return 0;
  }
  return result;
}
