_DWORD *__fastcall sub_5FF38(_DWORD *result)
{
  _DWORD *v1; // r4
  int v2; // r6
  _BYTE *v3; // r5

  v1 = result;
  v2 = result[4];
  v3 = (_BYTE *)result[3];
  if ( v2 )
  {
    sub_256850(result[9], result[1]);
    if ( *((_BYTE *)v1 + 40) )
    {
      sub_259314(*((unsigned __int8 *)v1 + 40), v1[1]);
      sub_259028(v3, v2, *((unsigned __int8 *)v1 + 40), v1[1]);
      sub_259314(*((unsigned __int8 *)v1 + 40), v1[1]);
    }
    else
    {
      sub_259028(v3, v2, *((unsigned __int8 *)v1 + 40), v1[1]);
    }
    sub_259314(10, v1[1]);
    result = (_DWORD *)sub_25680C(v1[1]);
    v3 = (_BYTE *)v1[3];
  }
  v1[4] = 0;
  *v3 = 0;
  return result;
}
