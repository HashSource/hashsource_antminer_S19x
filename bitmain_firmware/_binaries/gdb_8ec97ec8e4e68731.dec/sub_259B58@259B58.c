_DWORD *__fastcall sub_259B58(_DWORD *result)
{
  _BYTE *v1; // r5
  int v2; // r6
  int v3; // r3
  int *v4; // r0
  __int64 v5; // r0

  v1 = (_BYTE *)dword_48A9BC;
  if ( !dword_48A9BC )
  {
    v5 = sub_94700((int)"utils.c", 1601, "failed internal consistency check");
    return (_DWORD *)sub_259C24(v5, HIDWORD(v5));
  }
  v2 = (int)result;
  if ( *(_BYTE *)dword_48A9BC )
  {
    *(_BYTE *)dword_48A9C0 = 0;
    v4 = (int *)sub_242F8C();
    result = (_DWORD *)sub_256850((int)v1, *v4);
    v1 = (_BYTE *)dword_48A9BC;
  }
  dword_48A9C0 = (int)v1;
  *v1 = 0;
  LOWORD(v3) = dword_48A9B8;
  if ( dword_48A9B8 == -1 )
  {
LABEL_14:
    dword_48A9E0 = 0;
    return result;
  }
  if ( dword_48A9B8 <= (unsigned int)dword_48A9D4 )
  {
    result = sub_259B34((int)&word_356638);
    if ( v2 )
      result = sub_259B34(v2);
    goto LABEL_14;
  }
  dword_48A9E0 = dword_48A9D4;
  if ( v2 )
    dword_48A9E4 = v2;
  else
    LOWORD(v3) = -14408;
  if ( !v2 )
  {
    HIWORD(v3) = 59;
    dword_48A9E4 = v3;
  }
  return result;
}
