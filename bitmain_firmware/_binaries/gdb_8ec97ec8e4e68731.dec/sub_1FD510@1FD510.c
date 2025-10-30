int __fastcall sub_1FD510(int a1)
{
  _DWORD *v2; // r4
  int v4; // r3
  int v5; // r0
  int v6; // [sp+0h] [bp-Ch] BYREF
  int v7; // [sp+4h] [bp-8h]

  v2 = sub_93028(4u);
  *(_DWORD *)(a1 + 16) = v2;
  if ( sub_96998(&v6) == -1 )
  {
    v5 = sub_94700((int)"ser-event.c", 64, "creating serial event pipe failed.");
    return sub_1FD590(v5);
  }
  else
  {
    sub_333C44(v6, 4, 2048);
    sub_333C44(v7, 4, 2048);
    v4 = v7;
    *(_DWORD *)(a1 + 4) = v6;
    *v2 = v4;
    return 0;
  }
}
