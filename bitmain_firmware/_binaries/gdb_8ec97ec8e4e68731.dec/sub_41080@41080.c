int __fastcall sub_41080(int a1, int a2, int a3)
{
  int v4; // r2
  _DWORD v5[5]; // [sp+0h] [bp-80h] BYREF
  _DWORD v6[3]; // [sp+14h] [bp-6Ch] BYREF
  _DWORD v7[24]; // [sp+20h] [bp-60h] BYREF

  v6[0] = a1;
  v6[1] = a2;
  v6[2] = a3;
  if ( sub_9902C(v6) )
    v4 = sub_98F68(v6);
  else
    v4 = ps_getpid_0(v6);
  sub_98F48(v5, 0, v4, 0);
  v7[0] = v5[0];
  v7[1] = v5[1];
  v7[2] = v5[2];
  return sub_323E3C(dword_472134, v7);
}
