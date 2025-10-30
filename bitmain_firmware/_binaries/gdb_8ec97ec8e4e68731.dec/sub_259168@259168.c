_BYTE *sub_259168()
{
  void *v0; // r5
  size_t v1; // r1
  _BYTE *result; // r0

  if ( dword_48A9B8 )
  {
    v0 = (void *)dword_48A9BC;
    v1 = dword_48A9B8 + 2;
    if ( dword_48A9BC )
    {
LABEL_3:
      result = sub_93050(v0, v1);
      dword_48A9BC = (int)result;
      dword_48A9C0 = (int)result;
      return result;
    }
  }
  else
  {
    sub_259080();
    v0 = (void *)dword_48A9BC;
    v1 = dword_48A9B8 + 2;
    if ( dword_48A9BC )
      goto LABEL_3;
  }
  result = sub_93028(v1);
  dword_48A9BC = (int)result;
  *result = (_BYTE)v0;
  dword_48A9C0 = (int)result;
  return result;
}
