_DWORD *__fastcall sub_1615B8(_DWORD *a1, const char *a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r2
  int v7; // r0
  int v8; // r5
  void (__fastcall *v9)(int, int, _DWORD); // r6
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v14; // r0

  v4 = sub_16F654(a1);
  v5 = ((int (__fastcall *)(int))loc_16BA38)(v4);
  if ( v5 )
  {
    v14 = sub_16F654(v5);
    v6 = ((int (__fastcall *)(int))loc_16BA84)(v14);
  }
  else
  {
    v6 = *(_DWORD *)(dword_487D2C + 8);
    if ( v6 )
      v6 = **(_DWORD **)(v6 + 4);
  }
  sub_162E84(a1, a2, v6);
  if ( !*a1 )
    sub_946E0("Failed to open '%s' for output.", a2);
  v7 = sub_2AA874(*a1, 3);
  v8 = *a1;
  v9 = *(void (__fastcall **)(int, int, _DWORD))(*(_DWORD *)(*a1 + 4) + 340);
  v10 = sub_16F654(v7);
  v11 = ((int (__fastcall *)(int))loc_163EB0)(v10);
  if ( v11 )
  {
    v12 = *(_DWORD *)(v11 + 12);
  }
  else
  {
    if ( !*(_DWORD *)(dword_487D2C + 8) )
      sub_946E0("Can't find bfd architecture for corefile (need execfile).");
    v12 = sub_2A6780();
  }
  v9(v8, v12, 0);
  return a1;
}
