_QWORD *__fastcall sub_11FBC(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  unsigned __int64 v10; // [sp+40h] [bp-2Ch]
  unsigned __int64 v11; // [sp+48h] [bp-24h]
  unsigned __int64 v12; // [sp+88h] [bp+1Ch]
  unsigned __int64 v13; // [sp+88h] [bp+1Ch]
  unsigned __int64 v14; // [sp+90h] [bp+24h]

  v12 = a6 + a2;
  v14 = sub_11514(a7 + v12 + a5, 21);
  v11 = v12;
  v13 = v12 + a3 + a4;
  v10 = v14 + sub_11514(v13, 44) + v11;
  *a1 = v13 + a5;
  a1[1] = v10;
  return a1;
}
