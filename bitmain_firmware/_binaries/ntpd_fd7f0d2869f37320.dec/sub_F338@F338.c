_DWORD *__fastcall sub_F338(int a1, int a2)
{
  _DWORD *v4; // r4

  v4 = (_DWORD *)sub_64B04(0, 24, 0, 1);
  v4[1] = a1;
  if ( !a2 )
    a2 = sub_64C8C(&unk_99528);
  v4[4] = a2;
  v4[2] = 419;
  return v4;
}
