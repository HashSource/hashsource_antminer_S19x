int __fastcall sub_4A9A4(int a1, int a2)
{
  _DWORD *v4; // r1
  int v5; // r3
  int v6; // r2
  int v7; // r12
  int v8; // r3
  int v9; // r4
  int v10; // r1
  char v12[60]; // [sp+8h] [bp-40h] BYREF

  gettimeofday((struct timeval *)(a2 + 8 * (*(__int16 *)(a2 + 406) + 56)), 0);
  v4 = (_DWORD *)(a2 + 8 * *(__int16 *)(a2 + 406));
  v5 = v4[112];
  v6 = v4[102];
  v7 = v4[113] - v4[103];
  v4[113] = v7;
  v8 = v5 - v6;
  v4[112] = v8;
  if ( v7 < 0 )
  {
    --v8;
    v7 += 1000000;
    v4[113] = v7;
    v4[112] = v8;
  }
  v9 = v7 / 1000 + 1000 * v8;
  sub_6C054(v12, 60, "* Loopback delay : %d.%03d mSec.", v9, v7 % 1000);
  if ( v9 <= 700 )
    v10 = 4;
  else
    v10 = 6;
  return sub_4A084(a1, v10, v12);
}
