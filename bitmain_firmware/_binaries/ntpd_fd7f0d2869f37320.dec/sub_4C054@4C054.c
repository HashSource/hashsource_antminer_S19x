int __fastcall sub_4C054(int a1, int a2)
{
  _DWORD *v4; // r1
  int v5; // r3
  int v6; // r12
  int v7; // r2
  bool v8; // nf
  int v9; // r12
  int v10; // r3
  int v11; // r4
  int v12; // r1
  char v14[60]; // [sp+8h] [bp-40h] BYREF

  gettimeofday((struct timeval *)(a2 + 8 * (*(__int16 *)(a2 + 406) + 56)), 0);
  v4 = (_DWORD *)(a2 + 8 * *(__int16 *)(a2 + 406));
  v5 = v4[112];
  v6 = v4[113] - v4[103];
  v7 = v4[102];
  v8 = v6 < 0;
  v4[113] = v6;
  v9 = v6 + (v6 < 0 ? 0xF4000 : 0);
  v10 = v5 - v7;
  if ( v8 )
    v9 += 576;
  v4[112] = v10;
  if ( v8 )
  {
    v4[113] = v9;
    v4[112] = --v10;
  }
  v11 = v9 / 1000 + 1000 * v10;
  sub_6D00C(v14, 60, "* Loopback delay : %d.%03d mSec.", v11, v9 % 1000);
  if ( v11 <= 700 )
    v12 = 4;
  else
    v12 = 6;
  return sub_4B63C(a1, v12, v14);
}
