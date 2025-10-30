int __fastcall sub_886C0(int a1, int a2)
{
  int v2; // r3
  int *v3; // r0
  int v7; // [sp+14h] [bp-10h]
  void *v8; // [sp+18h] [bp-Ch]
  int v9; // [sp+1Ch] [bp-8h]

  v2 = 2 * *(_DWORD *)(a1 + 8);
  if ( a2 >= v2 )
    v2 = a2;
  v9 = v2;
  v8 = realloc(*(void **)a1, 4 * v2);
  if ( v8 )
  {
    *(_DWORD *)a1 = v8;
    v7 = v9 - *(_DWORD *)(a1 + 8);
    if ( v7 )
      memset((void *)(*(_DWORD *)a1 + 4 * *(_DWORD *)(a1 + 8)), 0, 4 * v7);
    *(_DWORD *)(a1 + 8) = v9;
    return 0;
  }
  else
  {
    v3 = _errno_location();
    sub_89984(2, "src/zc_arraylist.c", 67, "realloc fail, errno[%d]", *v3);
    return -1;
  }
}
