// @generated by Thrift for thrift/compiler/test/fixtures/types/src/module.thrift
// This file is probably not the place you want to edit!

//! Mock definitions for `module`.
//!
//! Client mocks. For every service, a struct mock::TheService that implements
//! client::TheService.
//!
//! As an example of the generated API, for the following thrift service:
//!
//! ```thrift
//! service MyService {
//!     FunctionResponse myFunction(
//!         1: FunctionRequest request,
//!     ) throws {
//!         1: StorageException s,
//!         2: NotFoundException n,
//!     ),
//!
//!     // other functions
//! }
//! ```
//!
//! we would end up with this mock object under crate::mock::MyService:
//!
//! ```
//! # const _: &str = stringify! {
//! impl crate::client::MyService for MyService<'mock> {...}
//!
//! pub struct MyService<'mock> {
//!     pub myFunction: myFunction<'mock>,
//!     // ...
//! }
//!
//! impl dyn crate::client::MyService {
//!     pub fn mock<'mock>() -> MyService<'mock>;
//! }
//!
//! impl myFunction<'mock> {
//!     // directly return the given success response
//!     pub fn ret(&self, value: FunctionResponse);
//!
//!     // invoke closure to compute success response
//!     pub fn mock(
//!         &self,
//!         mock: impl FnMut(FunctionRequest) -> FunctionResponse + Send + Sync + 'mock,
//!     );
//!
//!     // invoke closure to compute response
//!     pub fn mock_result(
//!         &self,
//!         mock: impl FnMut(FunctionRequest) -> Result<FunctionResponse, crate::services::MyService::MyFunctionExn> + Send + Sync + 'mock,
//!     );
//!
//!     // return one of the function's declared exceptions
//!     pub fn throw<E>(&self, exception: E)
//!     where
//!         E: Clone + Into<crate::services::MyService::MyFunctionExn> + Send + Sync + 'mock;
//! }
//!
//! impl From<StorageException> for MyFunctionExn {...}
//! impl From<NotFoundException> for MyFunctionExn {...}
//! # };
//! ```
//!
//! The intended usage from a test would be:
//!
//! ```
//! # const _: &str = stringify! {
//! use std::sync::Arc;
//! use thrift_if::client::MyService;
//!
//! #[test]
//! fn test_my_client() {
//!     let mock = Arc::new(<dyn MyService>::mock());
//!
//!     // directly return a success response
//!     let resp = FunctionResponse {...};
//!     mock.myFunction.ret(resp);
//!
//!     // or give a closure to compute the success response
//!     mock.myFunction.mock(|request| FunctionResponse {...});
//!
//!     // or throw one of the function's exceptions
//!     mock.myFunction.throw(StorageException::ItFailed);
//!
//!     // or compute a Result (useful if your exceptions aren't Clone)
//!     mock.myFunction.mock_result(|request| Err(...));
//!
//!     let out = do_the_thing(mock).wait().unwrap();
//!     assert!(out.what_i_expected());
//! }
//!
//! fn do_the_thing(
//!     client: Arc<dyn MyService + Send + Sync + 'static>,
//! ) -> impl Future<Item = Out> {...}
//! # };
//! ```

pub struct SomeService<'mock> {
    pub bounce_map: r#impl::some_service::bounce_map<'mock>,
    pub binary_keyed_map: r#impl::some_service::binary_keyed_map<'mock>,
    _marker: ::std::marker::PhantomData<&'mock ()>,
}

impl dyn super::client::SomeService {
    pub fn mock<'mock>() -> SomeService<'mock> {
        SomeService {
            bounce_map: r#impl::some_service::bounce_map::unimplemented(),
            binary_keyed_map: r#impl::some_service::binary_keyed_map::unimplemented(),
            _marker: ::std::marker::PhantomData,
        }
    }
}

impl<'mock> super::client::SomeService for SomeService<'mock> {
    fn bounce_map(
        &self,
        arg_m: &included__types::SomeMap,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<included__types::SomeMap, crate::errors::some_service::BounceMapError>> {
        let mut closure = self.bounce_map.closure.lock().unwrap();
        let closure: &mut dyn ::std::ops::FnMut(included__types::SomeMap) -> _ = &mut **closure;
        ::std::boxed::Box::pin(::futures::future::ready(closure(arg_m.clone())))
    }
    fn binary_keyed_map(
        &self,
        arg_r: &[::std::primitive::i64],
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::collections::BTreeMap<crate::types::TBinary, ::std::primitive::i64>, crate::errors::some_service::BinaryKeyedMapError>> {
        let mut closure = self.binary_keyed_map.closure.lock().unwrap();
        let closure: &mut dyn ::std::ops::FnMut(::std::vec::Vec<::std::primitive::i64>) -> _ = &mut **closure;
        ::std::boxed::Box::pin(::futures::future::ready(closure(arg_r.to_owned())))
    }
}

pub mod r#impl {
    pub mod some_service {

        pub struct bounce_map<'mock> {
            pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                dyn ::std::ops::FnMut(included__types::SomeMap) -> ::std::result::Result<
                    included__types::SomeMap,
                    crate::errors::some_service::BounceMapError,
                > + ::std::marker::Send + ::std::marker::Sync + 'mock,
            >>,
        }

        #[allow(clippy::redundant_closure)]
        impl<'mock> bounce_map<'mock> {
            pub(crate) fn unimplemented() -> Self {
                Self {
                    closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|_: included__types::SomeMap| panic!(
                        "{}::{} is not mocked",
                        "SomeService",
                        "bounce_map",
                    ))),
                }
            }

            pub fn ret(&self, value: included__types::SomeMap) {
                self.mock(move |_: included__types::SomeMap| value.clone());
            }

            pub fn mock(&self, mut mock: impl ::std::ops::FnMut(included__types::SomeMap) -> included__types::SomeMap + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |m| ::std::result::Result::Ok(mock(m)));
            }

            pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut(included__types::SomeMap) -> ::std::result::Result<included__types::SomeMap, crate::errors::some_service::BounceMapError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |m| mock(m));
            }

            pub fn throw<E>(&self, exception: E)
            where
                E: ::std::convert::Into<crate::errors::some_service::BounceMapError>,
                E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
            {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |_: included__types::SomeMap| ::std::result::Result::Err(exception.clone().into()));
            }
        }

        pub struct binary_keyed_map<'mock> {
            pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                dyn ::std::ops::FnMut(::std::vec::Vec<::std::primitive::i64>) -> ::std::result::Result<
                    ::std::collections::BTreeMap<crate::types::TBinary, ::std::primitive::i64>,
                    crate::errors::some_service::BinaryKeyedMapError,
                > + ::std::marker::Send + ::std::marker::Sync + 'mock,
            >>,
        }

        #[allow(clippy::redundant_closure)]
        impl<'mock> binary_keyed_map<'mock> {
            pub(crate) fn unimplemented() -> Self {
                Self {
                    closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|_: ::std::vec::Vec<::std::primitive::i64>| panic!(
                        "{}::{} is not mocked",
                        "SomeService",
                        "binary_keyed_map",
                    ))),
                }
            }

            pub fn ret(&self, value: ::std::collections::BTreeMap<crate::types::TBinary, ::std::primitive::i64>) {
                self.mock(move |_: ::std::vec::Vec<::std::primitive::i64>| value.clone());
            }

            pub fn mock(&self, mut mock: impl ::std::ops::FnMut(::std::vec::Vec<::std::primitive::i64>) -> ::std::collections::BTreeMap<crate::types::TBinary, ::std::primitive::i64> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |r| ::std::result::Result::Ok(mock(r)));
            }

            pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut(::std::vec::Vec<::std::primitive::i64>) -> ::std::result::Result<::std::collections::BTreeMap<crate::types::TBinary, ::std::primitive::i64>, crate::errors::some_service::BinaryKeyedMapError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |r| mock(r));
            }

            pub fn throw<E>(&self, exception: E)
            where
                E: ::std::convert::Into<crate::errors::some_service::BinaryKeyedMapError>,
                E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
            {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |_: ::std::vec::Vec<::std::primitive::i64>| ::std::result::Result::Err(exception.clone().into()));
            }
        }
    }
}
