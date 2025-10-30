_BYTE *__fastcall sub_EFCFC(_BYTE *result)
{
  if ( !result[36] )
    return (_BYTE *)(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)result + 40))(result);
  return result;
}
