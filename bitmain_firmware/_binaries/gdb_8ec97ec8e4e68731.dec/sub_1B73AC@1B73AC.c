_DWORD *__fastcall sub_1B73AC(_DWORD *result)
{
  _DWORD *v1; // r2
  __int64 v2; // r0
  _DWORD *v3; // r4
  _DWORD *v4; // r5
  _DWORD *v5; // r2

  v1 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v1 )
    goto LABEL_8;
  if ( v1 != result )
  {
    while ( *v1 )
    {
      if ( (_DWORD *)*v1 == result )
        goto LABEL_7;
      v1 = (_DWORD *)*v1;
    }
LABEL_8:
    v2 = sub_94700((int)"objfiles.c", 572, "unlink_objfile: objfile already unlinked");
    v3 = (_DWORD *)HIDWORD(v2);
    v4 = (_DWORD *)v2;
    result = (_DWORD *)sub_1B73AC();
    v5 = *(_DWORD **)(dword_487D2C + 36);
    if ( v5 )
    {
      if ( v5 == v3 )
      {
        v5 = (_DWORD *)(dword_487D2C + 36);
LABEL_14:
        *v4 = v3;
        *v5 = v4;
        return result;
      }
      while ( *v5 )
      {
        if ( (_DWORD *)*v5 == v3 )
          goto LABEL_14;
        v5 = (_DWORD *)*v5;
      }
    }
    sub_94700((int)"objfiles.c", 540, "put_objfile_before: before objfile not in list");
    JUMPOUT(0x1B7498);
  }
  v1 = (_DWORD *)(dword_487D2C + 36);
LABEL_7:
  *v1 = *result;
  *result = 0;
  return result;
}
