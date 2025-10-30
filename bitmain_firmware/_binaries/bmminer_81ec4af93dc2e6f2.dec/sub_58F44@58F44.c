int __fastcall sub_58F44(int a1, int a2, int a3, int a4, int a5)
{
  void *v11; // [sp+10h] [bp-2Ch] BYREF
  void *v12; // [sp+14h] [bp-28h] BYREF
  void *v13; // [sp+18h] [bp-24h] BYREF
  void *ptr; // [sp+1Ch] [bp-20h] BYREF
  int v15; // [sp+20h] [bp-1Ch]
  int v16; // [sp+24h] [bp-18h]
  _DWORD *v17; // [sp+28h] [bp-14h]
  int v18; // [sp+2Ch] [bp-10h]
  _DWORD *v19; // [sp+30h] [bp-Ch]
  _DWORD *v20; // [sp+34h] [bp-8h]

  v18 = 0;
  v17 = malloc(0x18u);
  if ( !v17 )
    return 2;
  *v17 = a1 + 4;
  v17[1] = a1 + 4;
  v17[3] = 1;
  v17[4] = sub_59FD4(a2, a3);
  if ( a4 )
    v17[5] = sub_59FD4(a4, a5);
  else
    v17[5] = 0;
  v20 = *(_DWORD **)a1;
  v19 = 0;
  while ( v20 != (_DWORD *)(a1 + 4) )
  {
    v15 = 0;
    sub_5A078(v20[4], &ptr);
    sub_5A078(v17[4], &v13);
    v15 = (*(int (__fastcall **)(void *, void *))(a1 + 36))(v13, ptr);
    free(ptr);
    free(v13);
    if ( !v15 )
      return 401;
    v19 = v20;
    if ( v15 >= 0 )
      v20 = (_DWORD *)v20[1];
    else
      v20 = (_DWORD *)*v20;
  }
  v17[2] = v19;
  if ( v19 )
  {
    v16 = 0;
    sub_5A078(v19[4], &v12);
    sub_5A078(v17[4], &v11);
    v16 = (*(int (__fastcall **)(void *, void *))(a1 + 36))(v11, v12);
    free(v12);
    free(v11);
    if ( v16 >= 0 )
      v19[1] = v17;
    else
      *v19 = v17;
  }
  else
  {
    *(_DWORD *)a1 = v17;
  }
  sub_58C38((_DWORD *)a1, v17);
  sub_59B54(a1);
  return v18;
}
