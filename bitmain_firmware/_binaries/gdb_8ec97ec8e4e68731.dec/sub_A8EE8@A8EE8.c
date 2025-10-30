int __fastcall sub_A8EE8(int a1, int a2, int a3)
{
  int v5; // r5
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v10; // r0
  int v11; // [sp+Ch] [bp-8h] BYREF

  v5 = a1;
  v6 = sub_26BC70(a1);
  if ( **(_BYTE **)(sub_171258(v6) + 24) == 1 )
    v5 = sub_26210C(v5);
  v7 = sub_26BD30(v5);
  if ( sub_A0CFC(v7) )
  {
    v10 = sub_A8914();
    return sub_A8EE8(v10, a2, a3);
  }
  else if ( v7 && sub_A0A04(v7) )
  {
    return sub_A86F8(v7, a2, a3);
  }
  else
  {
    v11 = sub_A11D4(v5);
    v8 = sub_2624C8(&v11, 0, *(_DWORD *)&asc_373FF8[8 * a2 + 644 + 4 * a3], 0, "Bad GNAT array descriptor bounds");
    return sub_26EB1C(v8);
  }
}
