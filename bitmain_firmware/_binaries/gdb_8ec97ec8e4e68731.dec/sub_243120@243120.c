_DWORD *__fastcall sub_243120(__int64 a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r2
  int v3; // r0
  int v4; // r0

  v2 = (_DWORD *)dword_48769C;
  if ( dword_48769C )
  {
    v1 = (_DWORD *)a1;
    if ( dword_48769C == (_DWORD)a1 )
    {
      dword_48769C = *(_DWORD *)a1;
      goto LABEL_9;
    }
    while ( *v2 )
    {
      if ( (_DWORD)a1 == *v2 )
        goto LABEL_8;
      v2 = (_DWORD *)*v2;
    }
  }
  a1 = sub_94700((int)"top.c", 297, "%s: Assertion `%s' failed.", "ui::~ui()", "ui != NULL");
LABEL_8:
  *v2 = *v1;
LABEL_9:
  LODWORD(a1) = v1[19];
  if ( (_DWORD)a1 )
    (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)a1 + 4))(a1, HIDWORD(a1));
  v3 = v1[18];
  if ( v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = v1[20];
  if ( v4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  return v1;
}
