int *__fastcall sub_348314(int *result, int a2)
{
  int v2; // r3
  int *v3; // r4
  int v4; // r2
  _DWORD *v5; // r0
  int v6; // r1
  int v7; // r2

  v2 = *result;
  v3 = result;
  v4 = *result << 31;
  if ( (*result & 1) != 0 )
  {
LABEL_4:
    v6 = v2 << 29;
    if ( (v2 & 4) != 0 )
      goto LABEL_5;
    goto LABEL_9;
  }
  v5 = result + 18;
  if ( (v2 & 2) != 0 )
  {
    result = (int *)sub_348C94(v5, a2, v4);
    v2 = *v3;
    goto LABEL_4;
  }
  result = (int *)sub_348C84(v5, a2, v4);
  v2 = *v3;
  v6 = *v3 << 29;
  if ( (*v3 & 4) != 0 )
  {
LABEL_5:
    v7 = v2 << 28;
    if ( (v2 & 8) != 0 )
      goto LABEL_6;
    goto LABEL_10;
  }
LABEL_9:
  result = (int *)sub_348CA4(v3 + 52, v6, v4);
  v2 = *v3;
  v7 = *v3 << 28;
  if ( (*v3 & 8) != 0 )
  {
LABEL_6:
    if ( (v2 & 0x10) != 0 )
      return result;
    return (int *)sub_348D3C(v3 + 116, v6, v7);
  }
LABEL_10:
  result = (int *)sub_348CB4(v3 + 84, v6, v7);
  if ( (*v3 & 0x10) == 0 )
    return (int *)sub_348D3C(v3 + 116, v6, v7);
  return result;
}
