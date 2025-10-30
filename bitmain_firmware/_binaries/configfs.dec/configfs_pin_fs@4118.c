__int64 configfs_pin_fs()
{
  __int64 result; // x0

  LODWORD(result) = simple_pin_fs(&off_6DD8, &qword_7288, &unk_7280);
  if ( (_DWORD)result )
    return (int)result;
  else
    return *(_QWORD *)qword_7288;
}
