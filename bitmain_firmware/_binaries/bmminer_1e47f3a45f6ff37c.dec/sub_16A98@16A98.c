__int64 __fastcall sub_16A98(int a1)
{
  float v1; // s10
  int v2; // r12
  float v3; // s15
  float v4; // s12
  bool v5; // zf
  float v6; // s11
  float v7; // s14
  float v8; // s0
  float v9; // s13

  v2 = dword_B3C10;
  v3 = flt_B3BF0 - flt_B3BF4;
  *(float *)&dword_B3C10 = flt_B3BF0 - flt_B3BF4;
  if ( flt_B3BF8 < 30.0 )
  {
    if ( flt_B3BFC > 21.0 )
    {
      v4 = 23.0;
      if ( flt_B3BFC > 23.0 )
      {
        if ( dword_B3C1C + 1 > 10 )
        {
          dword_B3C1C = 0;
          v4 = 100.0;
          if ( *(float *)&dword_B3BEC < 100.0 )
          {
            v4 = 1.0;
            *(float *)&dword_B3BEC = *(float *)&dword_B3BEC + 1.0;
          }
        }
        else
        {
          ++dword_B3C1C;
        }
      }
      else if ( dword_B3C1C + 1 > 15 )
      {
        dword_B3C1C = 0;
        v4 = 100.0;
        if ( *(float *)&dword_B3BEC < 100.0 )
        {
          v4 = 1.0;
          *(float *)&dword_B3BEC = *(float *)&dword_B3BEC + 1.0;
        }
      }
      else
      {
        ++dword_B3C1C;
      }
      goto LABEL_13;
    }
    v4 = 19.0;
    if ( flt_B3BFC >= 19.0 )
      goto LABEL_13;
    if ( ++dword_B3C1C <= 20 )
      goto LABEL_13;
  }
  v4 = 20.0;
  if ( *(float *)&dword_B3BEC > 20.0 )
  {
    v4 = 1.0;
    dword_B3C1C = 0;
    *(float *)&dword_B3BEC = *(float *)&dword_B3BEC - 1.0;
  }
LABEL_13:
  v5 = byte_B3C20 == 0;
  if ( byte_B3C20 )
    v4 = flt_B3C14;
  else
    byte_B3C20 = 1;
  if ( v5 )
    v4 = flt_B3BF0 - flt_B3BF4;
  else
    v1 = flt_B3C18;
  if ( v5 )
  {
    flt_B3C14 = flt_B3BF0 - flt_B3BF4;
    flt_B3C18 = flt_B3BF0 - flt_B3BF4;
    v1 = flt_B3BF0 - flt_B3BF4;
  }
  v6 = v3 - v4;
  v7 = (float)(v3 - (float)(v4 + v4)) + v1;
  if ( dword_5BFE3C && *(_QWORD *)&dword_B3C28 > 0x257u )
    v8 = (float)((float)(v3 * *(float *)&dword_B3C08) + (float)(v6 * *(float *)&dword_B3C04))
       + (float)(v7 * *(float *)&dword_B3C0C);
  else
    v8 = (float)((float)(v3 * *(float *)&dword_B3C08) + (float)(v6 * *(float *)&dword_B3C00))
       + (float)(v7 * *(float *)&dword_B3C0C);
  v9 = (float)a1 + v8;
  if ( v9 > *(float *)&dword_B3BE8 || v9 < *(float *)&dword_B3BEC )
  {
    dword_B3C10 = v2;
  }
  else
  {
    flt_B3C18 = v4;
    flt_B3C14 = flt_B3BF0 - flt_B3BF4;
  }
  return ++*(_QWORD *)&dword_B3C28;
}
