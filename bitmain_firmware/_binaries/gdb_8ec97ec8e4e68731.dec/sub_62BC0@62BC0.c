int __fastcall sub_62BC0(_DWORD *a1, int *a2)
{
  _DWORD *v2; // r4
  int v3; // r5

  v2 = a1 + 2;
  v3 = *a2;
  if ( !sub_23F1A8(a1[2], a1[3], a1[4]) || v3 && v3 != ps_getpid_0(v2) )
    return 0;
  sub_23F9F0(*v2, v2[1], v2[2]);
  sub_187D70(0);
  sub_18BAD4(-1, 144);
  return 0;
}
