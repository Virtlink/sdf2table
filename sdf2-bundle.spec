Summary: SDF2 syntax definition formalism
Name: sdf2-bundle
Version: 2.4
Release: 1
License: LGPL
Group: Development/Languages
URL: http://www.syntax-definition.org
Source0: %{name}-%{version}.tar.gz
BuildRoot: %{_tmppath}/%{name}-%{version}-buildroot
Requires: aterm
Provides: %{name} = %{version}

%description

SDF2 syntax definition formalism

%prep
%setup -q

%build
CFLAGS="-D__NO_CTYPE" ./configure --prefix=%{_prefix}  --with-aterm=%{_prefix}
make

%install
rm -rf $RPM_BUILD_ROOT
make DESTDIR=$RPM_BUILD_ROOT install

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root,-)
%{_bindir}/
%{_includedir}
%{_libdir}/
%{_datadir}/
%doc

%changelog
