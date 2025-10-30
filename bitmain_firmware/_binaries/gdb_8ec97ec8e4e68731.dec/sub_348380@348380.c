int __fastcall sub_348380(_DWORD *a1, int a2)
{
  int (__fastcall *v4)(int, _DWORD *, int); // r3
  int v5; // r0
  int v6; // r0

  do
  {
    if ( sub_348264(a1, *(_DWORD *)(a2 + 64)) )
      goto LABEL_4;
    v4 = (int (__fastcall *)(int, _DWORD *, int))a1[4];
    a1[5] = *(_DWORD *)(a2 + 64);
    v5 = v4(1, a1, a2);
  }
  while ( v5 == 8 );
  if ( v5 != 7 )
LABEL_4:
    abort();
  nullsub_35();
  v6 = sub_348C6C(a2 + 4);
  return sub_3483C0(v6);
}
