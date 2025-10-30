_QWORD *__fastcall sub_11F3C(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  unsigned __int64 v10; // [sp+18h] [bp-14h]
  unsigned __int64 v11; // [sp+20h] [bp-Ch]
  unsigned __int64 v12; // [sp+48h] [bp+1Ch]
  unsigned __int64 v13; // [sp+48h] [bp+1Ch]
  unsigned __int64 v14; // [sp+50h] [bp+24h]

  v12 = a2 + a6;
  v14 = sub_11558(a7 + v12 + a5, 21);
  v11 = v12;
  v13 = a4 + a3 + v12;
  v10 = v11 + v14 + sub_11558(v13, 44);
  *a1 = a5 + v13;
  a1[1] = v10;
  return a1;
}
