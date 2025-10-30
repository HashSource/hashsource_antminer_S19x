_DWORD *__fastcall sub_2612F8(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r0
  int v5; // r1
  _DWORD *v6; // r4
  int v8; // [sp+0h] [bp-Ch] BYREF
  int v9; // [sp+4h] [bp-8h] BYREF

  sub_2611C4("malloc", &v8);
  v3 = v2;
  sub_1B7250(v8);
  sub_1780B4();
  v9 = sub_26DAF4(*(_DWORD *)(v4 + 12), v5, a1, a1 >> 31);
  v6 = sub_17E6EC(v3, 0, 1, (char *)&v9);
  if ( sub_25DC1C((int)v6) )
  {
    if ( !sub_22EBBC() )
      sub_946E0("No memory available to program now: you need to start the target first");
    sub_946E0("No memory available to program: call to malloc failed");
  }
  return v6;
}
