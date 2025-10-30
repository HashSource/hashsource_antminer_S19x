void __fastcall sub_153654(int a1, int a2)
{
  _DWORD *v2; // r4
  int v3; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int *v9; // t0

  sub_92E40(v3);
  if ( a2 == 1 )
  {
    v9 = (int *)sub_339E78(a1);
    v6 = *v9++;
    v7 = *v9;
    v8 = v9[1];
    *v2 = v6;
    v2[1] = v7;
    v2[2] = v8;
    sub_339EF8(v6);
    JUMPOUT(0x153638);
  }
  sub_339E78(a1);
  sub_92E60();
}
