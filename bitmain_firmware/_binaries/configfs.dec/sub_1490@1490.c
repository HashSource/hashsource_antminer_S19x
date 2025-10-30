__int64 __fastcall sub_1490(_QWORD *a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  _QWORD *v4; // x19
  _QWORD *v5; // x0

  v3 = a1 + 13;
  v2 = (_QWORD *)a1[13];
  v4 = v2 - 15;
  if ( v3 != v2 )
  {
    do
    {
      sub_1490(v4);
      v5 = (_QWORD *)v4[15];
      v4 = v5 - 15;
    }
    while ( v3 != v5 );
  }
  a1[12] = 0;
  return sub_1430(a1);
}
