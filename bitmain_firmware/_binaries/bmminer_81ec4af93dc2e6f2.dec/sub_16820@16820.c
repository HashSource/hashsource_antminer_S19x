int __fastcall sub_16820(int a1)
{
  float v1; // s9
  int v2; // r12
  float v3; // s14
  bool v4; // nf
  char v5; // r2
  bool v6; // zf
  float v7; // s12
  float v8; // s11
  float v9; // s0
  float v10; // s15
  float v11; // s0
  float v12; // s13
  int v14; // r2

  v2 = dword_B0EA0;
  v3 = flt_B0E80 - flt_B0E84;
  *(float *)&dword_B0EA0 = flt_B0E80 - flt_B0E84;
  if ( flt_B0E88 >= 30.0 )
  {
LABEL_5:
    if ( flt_B0E7C > 20.0 )
    {
      dword_B0EAC = 0;
      flt_B0E7C = flt_B0E7C - 1.0;
    }
    goto LABEL_7;
  }
  if ( flt_B0E8C <= 21.0 )
  {
    if ( flt_B0E8C >= 19.0 )
      goto LABEL_7;
    v4 = dword_B0EAC - 19 < 0;
    ++dword_B0EAC;
    if ( v4 ^ __OFSUB__(dword_B0EAC, 20) | (dword_B0EAC == 20) )
      goto LABEL_7;
    goto LABEL_5;
  }
  v14 = dword_B0EAC + 1;
  if ( flt_B0E8C <= 23.0 )
  {
    if ( v14 > 15 )
      goto LABEL_27;
LABEL_31:
    ++dword_B0EAC;
    goto LABEL_7;
  }
  if ( v14 <= 10 )
    goto LABEL_31;
LABEL_27:
  dword_B0EAC = 0;
  if ( flt_B0E7C < 100.0 )
    flt_B0E7C = flt_B0E7C + 1.0;
LABEL_7:
  v5 = byte_B0EB0;
  v6 = byte_B0EB0 == 0;
  if ( byte_B0EB0 )
  {
    v7 = flt_B0EA4;
  }
  else
  {
    v5 = 1;
    v7 = flt_B0E80 - flt_B0E84;
  }
  if ( byte_B0EB0 )
    v1 = flt_B0EA8;
  else
    byte_B0EB0 = v5;
  if ( v6 )
  {
    v1 = flt_B0E80 - flt_B0E84;
    flt_B0EA4 = flt_B0E80 - flt_B0E84;
    flt_B0EA8 = flt_B0E80 - flt_B0E84;
  }
  v8 = v3 - v7;
  v9 = v3 * flt_B0E98;
  v10 = (float)((float)(v3 - (float)(v7 + v7)) + v1) * flt_B0E9C;
  if ( dword_5BAF84 && (unsigned __int64)qword_B0EB8 > 0x257 )
    v11 = (float)(v9 + (float)(v8 * flt_B0E94)) + v10;
  else
    v11 = (float)(v9 + (float)(v8 * flt_B0E90)) + v10;
  v12 = (float)a1 + v11;
  if ( v12 > flt_B0E78 || v12 < flt_B0E7C )
  {
    dword_B0EA0 = v2;
  }
  else
  {
    flt_B0EA8 = v7;
    flt_B0EA4 = flt_B0E80 - flt_B0E84;
  }
  return ++qword_B0EB8;
}
