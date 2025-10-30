int __fastcall sub_18C0BC(_DWORD *a1, int *a2)
{
  _DWORD *v2; // r4
  int v3; // r6
  int v6; // r5
  const char *v7; // r0

  v2 = a1 + 2;
  v3 = *a2;
  if ( v3 == ps_getpid_0((int)(a1 + 2))
    && sub_23F1E0(*v2, v2[1], v2[2])
    && !((int (__fastcall *)(_DWORD, _DWORD, _DWORD))loc_23F1FC)(*v2, v2[1], v2[2])
    && !a1[56]
    && !a1[36] )
  {
    if ( dword_487930 )
    {
      v6 = *(_DWORD *)sub_242FC8(0);
      v7 = (const char *)sub_23095C(*v2, v2[1], v2[2]);
      sub_2594B0(v6, "infrun: resuming vfork parent thread %s\n", v7);
    }
    sub_23F9F0(*v2, v2[1], v2[2]);
    sub_187D70(0);
    sub_18BAD4((const char *)0xFFFFFFFF, (_DWORD *)0x90);
  }
  return 0;
}
