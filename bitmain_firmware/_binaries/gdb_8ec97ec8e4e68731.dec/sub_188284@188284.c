int __fastcall sub_188284(_DWORD *a1, _DWORD *a2)
{
  int v3; // r1
  int v4; // r2
  int result; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3

  v3 = dword_487954[1];
  v4 = dword_487954[2];
  *a1 = dword_487954[0];
  a1[1] = v3;
  a1[2] = v4;
  result = dword_487960;
  v6 = *(_DWORD *)algn_487964;
  v7 = *(_DWORD *)&algn_487964[4];
  v8 = *(_DWORD *)&algn_487964[8];
  *a2 = dword_487960;
  a2[1] = v6;
  a2[2] = v7;
  a2[3] = v8;
  return result;
}
