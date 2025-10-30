void __fastcall sub_248000(int a1, int a2)
{
  int v3; // r0
  _DWORD *v4; // r4
  int v5; // [sp+Ch] [bp-28h] BYREF
  _DWORD *v6; // [sp+10h] [bp-24h] BYREF
  _DWORD *v7; // [sp+14h] [bp-20h] BYREF
  void *ptr; // [sp+18h] [bp-1Ch] BYREF
  char v9; // [sp+20h] [bp-14h] BYREF

  v5 = a1;
  v3 = ((int (__fastcall *)(int *, _DWORD))loc_D1990)(&v5, 0);
  v4 = (_DWORD *)v3;
  if ( v3 )
  {
    sub_931D8((char **)&ptr, "Enter actions for tracepoint %d, one per line.", *(_DWORD *)(v3 + 24));
    sub_5807C(&v6, (int)ptr, a2, 1, (void (__fastcall *)(_DWORD, int))sub_C71F4, (int)v4);
    sub_DD974(v4, (int *)&v6);
    if ( v6 )
    {
      v7 = v6;
      sub_57E18(&v7);
    }
    if ( ptr != &v9 )
      sub_339E64(ptr);
  }
}
